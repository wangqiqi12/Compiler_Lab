parser grammar LLVMParser;
@header {
    #include <optional>
    #include <memory>
    #include <variant>
    #include <chiisai-llvm/ref.h>
    #include <chiisai-llvm/type.h>
    #include <chiisai-llvm/function.h>
    #include <chiisai-llvm/constant.h>
    #include <chiisai-llvm/constant-array.h>
    #include <chiisai-llvm/array-type.h>
    #include <chiisai-llvm/instruction.h>
}
options {
    tokenVocab=LLVMLexer;
}

scalarType
    locals [
    CRef<Type> typeRef,
]: I1 | I32 | I64 | Float | Double | Int;

basicType
    locals[
    CRef<Type> typeRef,
]: Void | scalarType;

type
    locals[
    CRef<Type> typeRef,
]: basicType | pointerType | arrayType;

pointerType
    locals[
    CRef<Type> typeRef,
]: basicType Asterisk+ | pointerType Asterisk+ | arrayType Asterisk+;

arrayType
    locals[
    CRef<ArrayType> typeRef,
]: LeftBracket IntegerLiteral Cross type RightBracket;

globalIdentifier: GlobalName;

localIdentifier: LocalName | Percent IntegerLiteral;

variable
    locals[
    bool isGlobal,
]: globalIdentifier | localIdentifier;

literal : Minus? IntegerLiteral | HexLiteral;

immediatelyUsableValue
    locals[
    bool isConstant,
]: localIdentifier | literal;

module: (globalDeclaration | functionDeclaration | functionDefinition)*;

initializer
locals[
    std::string name,
    CRef<Type> typeRef,
    CRef<Constant> constant,
]: scalarType IntegerLiteral | scalarType HexLiteral | constantArray;

constantArray
locals[
    std::string name,
    CRef<Constant> constArray,
]: arrayType LeftBracket (initializer (Comma initializer)*)? RightBracket;

globalDeclaration : globalIdentifier Equals (Global | ConstantStr) initializer (Comma Align IntegerLiteral)?;

functionDeclaration
    locals [
        std::unique_ptr<Function> function,
        std::vector<CRef<Type>> argTypes,
        std::vector<std::string> argNames,
    ]: Declare type globalIdentifier functionArguments;

functionDefinition
 locals [
    std::unique_ptr<Function> function,
    std::vector<CRef<Type>> argTypes,
    std::vector<std::string> argNames,
]: Define type globalIdentifier functionArguments (LeftBrace basicBlock* RightBrace)?;

functionArguments
 locals [
    std::vector<CRef<Type>> argTypes,
    std::vector<std::string> argNames,
]: LeftParen parameterList? RightParen;

parameterList
 locals[
    std::vector<CRef<Type>> argTypes,
    std::vector<std::string> argNames,
]: parameter (Comma parameter)*;

parameter
  locals [
     CRef<Type> argType,
     std::string argName,
]: type (localIdentifier)?;

basicBlock: LabelName instruction*;

instruction
  locals [
      std::unique_ptr<Instruction> inst,
]:  callInstruction
    | arithmeticInstruction
    | loadInstruction
    | storeInstruction
    | phiInstruction
    | comparisonInstruction
    | allocaInstruction
    | terminatorInstruction
    | gepInstruction
    ;

returnInstruction: Ret (Void | (type immediatelyUsableValue));

branchInstruction: Br I1 immediatelyUsableValue Comma Label localIdentifier Comma Label localIdentifier
                | Br Label localIdentifier;

callInstruction: (localIdentifier Equals)? Call type globalIdentifier functionArguments;

arithmeticInstruction
    : localIdentifier Equals binaryOperation type immediatelyUsableValue Comma immediatelyUsableValue
    ;

loadInstruction
    : localIdentifier Equals Load type Comma type Asterisk variable (Comma Align IntegerLiteral)?
    ;

storeInstruction
    : Store type immediatelyUsableValue Comma type Asterisk variable (Comma Align IntegerLiteral)?
    ;

phiInstruction
    : localIdentifier Equals Phi type phiValue (Comma phiValue)*
    ;

phiValue
    locals [
        Ref<BasicBlock> block,
        Ref<Value> value,
        CRef<Type> typeRef,
    ]: LeftBrace immediatelyUsableValue Comma localIdentifier RightBrace;

comparisonOperation : Icmp | Fcmp;

comparisonInstruction
    : localIdentifier Equals comparisonOperation comparisonPredicate type immediatelyUsableValue Comma immediatelyUsableValue
    ;

allocaInstruction
    : localIdentifier Equals Alloca type (Comma I32 IntegerLiteral)? (Comma Align IntegerLiteral)?
    ;

binaryOperation
    : Add | Sub | Mul | Div | Srem | FAdd | FSub | FMul | FDiv
    ;

comparisonPredicate
    : Eq | Ne | Ugt | Uge | Ult | Ule | Sgt | Sge | Slt | Sle | Oeq | One | Ogt | Oge | Olt | Ole
    ;

terminatorInstruction
    : returnInstruction
    | branchInstruction
    ;

// GetElementPtr instruction
// currently, we don't support multiple indices
// multidimensional arrays should be flattened
gepInstruction
    : localIdentifier Equals GetElementPtr type Comma type Asterisk variable (Comma scalarType immediatelyUsableValue)?
    ;