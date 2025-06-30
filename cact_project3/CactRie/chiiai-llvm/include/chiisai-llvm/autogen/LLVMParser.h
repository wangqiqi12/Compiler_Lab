
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


// Generated from ./grammar/LLVMParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace llvm {


class  LLVMParser : public antlr4::Parser {
public:
  enum {
    Global = 1, ConstantStr = 2, External = 3, Define = 4, Declare = 5, 
    Align = 6, Unreachable = 7, Br = 8, Ret = 9, Call = 10, Load = 11, Store = 12, 
    Alloca = 13, GetElementPtr = 14, Phi = 15, Add = 16, FAdd = 17, Sub = 18, 
    FSub = 19, Mul = 20, FMul = 21, Div = 22, FDiv = 23, And = 24, Srem = 25, 
    Or = 26, Xor = 27, Shl = 28, Lshr = 29, Ashr = 30, Icmp = 31, Fcmp = 32, 
    Sext = 33, Zext = 34, Trunc = 35, Label = 36, Void = 37, Ptr = 38, I1 = 39, 
    I32 = 40, Int = 41, I64 = 42, Float = 43, Double = 44, Eq = 45, Ne = 46, 
    Ugt = 47, Uge = 48, Ult = 49, Ule = 50, Sgt = 51, Sge = 52, Slt = 53, 
    Sle = 54, Oeq = 55, One = 56, Ogt = 57, Oge = 58, Olt = 59, Ole = 60, 
    Equals = 61, Comma = 62, LeftParen = 63, RightParen = 64, LeftBrace = 65, 
    RightBrace = 66, LeftBracket = 67, RightBracket = 68, At = 69, Percent = 70, 
    Asterisk = 71, Colon = 72, Cross = 73, Minus = 74, SourceFilename = 75, 
    GlobalName = 76, LocalName = 77, LabelName = 78, IntegerLiteral = 79, 
    HexLiteral = 80, Whitespace = 81, Comment = 82, SourceFileComment = 83
  };

  enum {
    RuleScalarType = 0, RuleBasicType = 1, RuleType = 2, RulePointerType = 3, 
    RuleArrayType = 4, RuleGlobalIdentifier = 5, RuleLocalIdentifier = 6, 
    RuleVariable = 7, RuleLiteral = 8, RuleImmediatelyUsableValue = 9, RuleModule = 10, 
    RuleInitializer = 11, RuleConstantArray = 12, RuleGlobalDeclaration = 13, 
    RuleFunctionDeclaration = 14, RuleFunctionDefinition = 15, RuleFunctionArguments = 16, 
    RuleParameterList = 17, RuleParameter = 18, RuleBasicBlock = 19, RuleInstruction = 20, 
    RuleReturnInstruction = 21, RuleBranchInstruction = 22, RuleCallInstruction = 23, 
    RuleArithmeticInstruction = 24, RuleLoadInstruction = 25, RuleStoreInstruction = 26, 
    RulePhiInstruction = 27, RulePhiValue = 28, RuleComparisonOperation = 29, 
    RuleComparisonInstruction = 30, RuleAllocaInstruction = 31, RuleBinaryOperation = 32, 
    RuleComparisonPredicate = 33, RuleTerminatorInstruction = 34, RuleGepInstruction = 35
  };

  explicit LLVMParser(antlr4::TokenStream *input);

  LLVMParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LLVMParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ScalarTypeContext;
  class BasicTypeContext;
  class TypeContext;
  class PointerTypeContext;
  class ArrayTypeContext;
  class GlobalIdentifierContext;
  class LocalIdentifierContext;
  class VariableContext;
  class LiteralContext;
  class ImmediatelyUsableValueContext;
  class ModuleContext;
  class InitializerContext;
  class ConstantArrayContext;
  class GlobalDeclarationContext;
  class FunctionDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionArgumentsContext;
  class ParameterListContext;
  class ParameterContext;
  class BasicBlockContext;
  class InstructionContext;
  class ReturnInstructionContext;
  class BranchInstructionContext;
  class CallInstructionContext;
  class ArithmeticInstructionContext;
  class LoadInstructionContext;
  class StoreInstructionContext;
  class PhiInstructionContext;
  class PhiValueContext;
  class ComparisonOperationContext;
  class ComparisonInstructionContext;
  class AllocaInstructionContext;
  class BinaryOperationContext;
  class ComparisonPredicateContext;
  class TerminatorInstructionContext;
  class GepInstructionContext; 

  class  ScalarTypeContext : public antlr4::ParserRuleContext {
  public:
    CRef<Type> typeRef;
    ScalarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *I1();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Int();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalarTypeContext* scalarType();

  class  BasicTypeContext : public antlr4::ParserRuleContext {
  public:
    CRef<Type> typeRef;
    BasicTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Void();
    ScalarTypeContext *scalarType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicTypeContext* basicType();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    CRef<Type> typeRef;
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    PointerTypeContext *pointerType();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  PointerTypeContext : public antlr4::ParserRuleContext {
  public:
    CRef<Type> typeRef;
    PointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    std::vector<antlr4::tree::TerminalNode *> Asterisk();
    antlr4::tree::TerminalNode* Asterisk(size_t i);
    ArrayTypeContext *arrayType();
    PointerTypeContext *pointerType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerTypeContext* pointerType();
  PointerTypeContext* pointerType(int precedence);
  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    CRef<ArrayType> typeRef;
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *Cross();
    TypeContext *type();
    antlr4::tree::TerminalNode *RightBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  GlobalIdentifierContext : public antlr4::ParserRuleContext {
  public:
    GlobalIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GlobalName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalIdentifierContext* globalIdentifier();

  class  LocalIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LocalIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocalName();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *IntegerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalIdentifierContext* localIdentifier();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    bool isGlobal;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GlobalIdentifierContext *globalIdentifier();
    LocalIdentifierContext *localIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *HexLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  ImmediatelyUsableValueContext : public antlr4::ParserRuleContext {
  public:
    bool isConstant;
    ImmediatelyUsableValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    LiteralContext *literal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImmediatelyUsableValueContext* immediatelyUsableValue();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GlobalDeclarationContext *> globalDeclaration();
    GlobalDeclarationContext* globalDeclaration(size_t i);
    std::vector<FunctionDeclarationContext *> functionDeclaration();
    FunctionDeclarationContext* functionDeclaration(size_t i);
    std::vector<FunctionDefinitionContext *> functionDefinition();
    FunctionDefinitionContext* functionDefinition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    std::string name;
    CRef<Type> typeRef;
    CRef<Constant> constant;
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarTypeContext *scalarType();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *HexLiteral();
    ConstantArrayContext *constantArray();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  ConstantArrayContext : public antlr4::ParserRuleContext {
  public:
    std::string name;
    CRef<Constant> constArray;
    ConstantArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayTypeContext *arrayType();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    std::vector<InitializerContext *> initializer();
    InitializerContext* initializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantArrayContext* constantArray();

  class  GlobalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GlobalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GlobalIdentifierContext *globalIdentifier();
    antlr4::tree::TerminalNode *Equals();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *Global();
    antlr4::tree::TerminalNode *ConstantStr();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Align();
    antlr4::tree::TerminalNode *IntegerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalDeclarationContext* globalDeclaration();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<Function> function;
    std::vector<CRef<Type>> argTypes;
    std::vector<std::string> argNames;
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declare();
    TypeContext *type();
    GlobalIdentifierContext *globalIdentifier();
    FunctionArgumentsContext *functionArguments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<Function> function;
    std::vector<CRef<Type>> argTypes;
    std::vector<std::string> argNames;
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Define();
    TypeContext *type();
    GlobalIdentifierContext *globalIdentifier();
    FunctionArgumentsContext *functionArguments();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<BasicBlockContext *> basicBlock();
    BasicBlockContext* basicBlock(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionArgumentsContext : public antlr4::ParserRuleContext {
  public:
    std::vector<CRef<Type>> argTypes;
    std::vector<std::string> argNames;
    FunctionArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterListContext *parameterList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgumentsContext* functionArguments();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    std::vector<CRef<Type>> argTypes;
    std::vector<std::string> argNames;
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    CRef<Type> argType;
    std::string argName;
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    LocalIdentifierContext *localIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  BasicBlockContext : public antlr4::ParserRuleContext {
  public:
    BasicBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LabelName();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicBlockContext* basicBlock();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<Instruction> inst;
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallInstructionContext *callInstruction();
    ArithmeticInstructionContext *arithmeticInstruction();
    LoadInstructionContext *loadInstruction();
    StoreInstructionContext *storeInstruction();
    PhiInstructionContext *phiInstruction();
    ComparisonInstructionContext *comparisonInstruction();
    AllocaInstructionContext *allocaInstruction();
    TerminatorInstructionContext *terminatorInstruction();
    GepInstructionContext *gepInstruction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  ReturnInstructionContext : public antlr4::ParserRuleContext {
  public:
    ReturnInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ret();
    antlr4::tree::TerminalNode *Void();
    TypeContext *type();
    ImmediatelyUsableValueContext *immediatelyUsableValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnInstructionContext* returnInstruction();

  class  BranchInstructionContext : public antlr4::ParserRuleContext {
  public:
    BranchInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Br();
    antlr4::tree::TerminalNode *I1();
    ImmediatelyUsableValueContext *immediatelyUsableValue();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Label();
    antlr4::tree::TerminalNode* Label(size_t i);
    std::vector<LocalIdentifierContext *> localIdentifier();
    LocalIdentifierContext* localIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BranchInstructionContext* branchInstruction();

  class  CallInstructionContext : public antlr4::ParserRuleContext {
  public:
    CallInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Call();
    TypeContext *type();
    GlobalIdentifierContext *globalIdentifier();
    FunctionArgumentsContext *functionArguments();
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallInstructionContext* callInstruction();

  class  ArithmeticInstructionContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    BinaryOperationContext *binaryOperation();
    TypeContext *type();
    std::vector<ImmediatelyUsableValueContext *> immediatelyUsableValue();
    ImmediatelyUsableValueContext* immediatelyUsableValue(size_t i);
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticInstructionContext* arithmeticInstruction();

  class  LoadInstructionContext : public antlr4::ParserRuleContext {
  public:
    LoadInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *Load();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Asterisk();
    VariableContext *variable();
    antlr4::tree::TerminalNode *Align();
    antlr4::tree::TerminalNode *IntegerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadInstructionContext* loadInstruction();

  class  StoreInstructionContext : public antlr4::ParserRuleContext {
  public:
    StoreInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Store();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    ImmediatelyUsableValueContext *immediatelyUsableValue();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Asterisk();
    VariableContext *variable();
    antlr4::tree::TerminalNode *Align();
    antlr4::tree::TerminalNode *IntegerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoreInstructionContext* storeInstruction();

  class  PhiInstructionContext : public antlr4::ParserRuleContext {
  public:
    PhiInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *Phi();
    TypeContext *type();
    std::vector<PhiValueContext *> phiValue();
    PhiValueContext* phiValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhiInstructionContext* phiInstruction();

  class  PhiValueContext : public antlr4::ParserRuleContext {
  public:
    Ref<BasicBlock> block;
    Ref<Value> value;
    CRef<Type> typeRef;
    PhiValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    ImmediatelyUsableValueContext *immediatelyUsableValue();
    antlr4::tree::TerminalNode *Comma();
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *RightBrace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhiValueContext* phiValue();

  class  ComparisonOperationContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Icmp();
    antlr4::tree::TerminalNode *Fcmp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperationContext* comparisonOperation();

  class  ComparisonInstructionContext : public antlr4::ParserRuleContext {
  public:
    ComparisonInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    ComparisonOperationContext *comparisonOperation();
    ComparisonPredicateContext *comparisonPredicate();
    TypeContext *type();
    std::vector<ImmediatelyUsableValueContext *> immediatelyUsableValue();
    ImmediatelyUsableValueContext* immediatelyUsableValue(size_t i);
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonInstructionContext* comparisonInstruction();

  class  AllocaInstructionContext : public antlr4::ParserRuleContext {
  public:
    AllocaInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *Alloca();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *I32();
    std::vector<antlr4::tree::TerminalNode *> IntegerLiteral();
    antlr4::tree::TerminalNode* IntegerLiteral(size_t i);
    antlr4::tree::TerminalNode *Align();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllocaInstructionContext* allocaInstruction();

  class  BinaryOperationContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Sub();
    antlr4::tree::TerminalNode *Mul();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Srem();
    antlr4::tree::TerminalNode *FAdd();
    antlr4::tree::TerminalNode *FSub();
    antlr4::tree::TerminalNode *FMul();
    antlr4::tree::TerminalNode *FDiv();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryOperationContext* binaryOperation();

  class  ComparisonPredicateContext : public antlr4::ParserRuleContext {
  public:
    ComparisonPredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eq();
    antlr4::tree::TerminalNode *Ne();
    antlr4::tree::TerminalNode *Ugt();
    antlr4::tree::TerminalNode *Uge();
    antlr4::tree::TerminalNode *Ult();
    antlr4::tree::TerminalNode *Ule();
    antlr4::tree::TerminalNode *Sgt();
    antlr4::tree::TerminalNode *Sge();
    antlr4::tree::TerminalNode *Slt();
    antlr4::tree::TerminalNode *Sle();
    antlr4::tree::TerminalNode *Oeq();
    antlr4::tree::TerminalNode *One();
    antlr4::tree::TerminalNode *Ogt();
    antlr4::tree::TerminalNode *Oge();
    antlr4::tree::TerminalNode *Olt();
    antlr4::tree::TerminalNode *Ole();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonPredicateContext* comparisonPredicate();

  class  TerminatorInstructionContext : public antlr4::ParserRuleContext {
  public:
    TerminatorInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnInstructionContext *returnInstruction();
    BranchInstructionContext *branchInstruction();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminatorInstructionContext* terminatorInstruction();

  class  GepInstructionContext : public antlr4::ParserRuleContext {
  public:
    GepInstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalIdentifierContext *localIdentifier();
    antlr4::tree::TerminalNode *Equals();
    antlr4::tree::TerminalNode *GetElementPtr();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Asterisk();
    VariableContext *variable();
    ScalarTypeContext *scalarType();
    ImmediatelyUsableValueContext *immediatelyUsableValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GepInstructionContext* gepInstruction();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool pointerTypeSempred(PointerTypeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace llvm
