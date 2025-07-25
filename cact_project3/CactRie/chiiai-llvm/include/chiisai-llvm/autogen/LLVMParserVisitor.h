
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
#include "LLVMParser.h"


namespace llvm {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by LLVMParser.
 */
class  LLVMParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LLVMParser.
   */
    virtual std::any visitScalarType(LLVMParser::ScalarTypeContext *context) = 0;

    virtual std::any visitBasicType(LLVMParser::BasicTypeContext *context) = 0;

    virtual std::any visitType(LLVMParser::TypeContext *context) = 0;

    virtual std::any visitPointerType(LLVMParser::PointerTypeContext *context) = 0;

    virtual std::any visitArrayType(LLVMParser::ArrayTypeContext *context) = 0;

    virtual std::any visitGlobalIdentifier(LLVMParser::GlobalIdentifierContext *context) = 0;

    virtual std::any visitLocalIdentifier(LLVMParser::LocalIdentifierContext *context) = 0;

    virtual std::any visitVariable(LLVMParser::VariableContext *context) = 0;

    virtual std::any visitLiteral(LLVMParser::LiteralContext *context) = 0;

    virtual std::any visitImmediatelyUsableValue(LLVMParser::ImmediatelyUsableValueContext *context) = 0;

    virtual std::any visitModule(LLVMParser::ModuleContext *context) = 0;

    virtual std::any visitInitializer(LLVMParser::InitializerContext *context) = 0;

    virtual std::any visitConstantArray(LLVMParser::ConstantArrayContext *context) = 0;

    virtual std::any visitGlobalDeclaration(LLVMParser::GlobalDeclarationContext *context) = 0;

    virtual std::any visitFunctionDeclaration(LLVMParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(LLVMParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionArguments(LLVMParser::FunctionArgumentsContext *context) = 0;

    virtual std::any visitParameterList(LLVMParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(LLVMParser::ParameterContext *context) = 0;

    virtual std::any visitBasicBlock(LLVMParser::BasicBlockContext *context) = 0;

    virtual std::any visitInstruction(LLVMParser::InstructionContext *context) = 0;

    virtual std::any visitReturnInstruction(LLVMParser::ReturnInstructionContext *context) = 0;

    virtual std::any visitBranchInstruction(LLVMParser::BranchInstructionContext *context) = 0;

    virtual std::any visitCallInstruction(LLVMParser::CallInstructionContext *context) = 0;

    virtual std::any visitArithmeticInstruction(LLVMParser::ArithmeticInstructionContext *context) = 0;

    virtual std::any visitLoadInstruction(LLVMParser::LoadInstructionContext *context) = 0;

    virtual std::any visitStoreInstruction(LLVMParser::StoreInstructionContext *context) = 0;

    virtual std::any visitPhiInstruction(LLVMParser::PhiInstructionContext *context) = 0;

    virtual std::any visitPhiValue(LLVMParser::PhiValueContext *context) = 0;

    virtual std::any visitComparisonOperation(LLVMParser::ComparisonOperationContext *context) = 0;

    virtual std::any visitComparisonInstruction(LLVMParser::ComparisonInstructionContext *context) = 0;

    virtual std::any visitAllocaInstruction(LLVMParser::AllocaInstructionContext *context) = 0;

    virtual std::any visitBinaryOperation(LLVMParser::BinaryOperationContext *context) = 0;

    virtual std::any visitComparisonPredicate(LLVMParser::ComparisonPredicateContext *context) = 0;

    virtual std::any visitTerminatorInstruction(LLVMParser::TerminatorInstructionContext *context) = 0;

    virtual std::any visitGepInstruction(LLVMParser::GepInstructionContext *context) = 0;


};

}  // namespace llvm
