
#include <cact-front-end/mystl/observer_ptr.h>
#include <cact-front-end/cact-constant-variable.h>
#include <cact-front-end/cact-expr.h>
#include <cact-front-end/cact-functions.h>
#include <cact-front-end/cact-operator.h>
#include <cact-front-end/cact-type.h>
#include <cact-front-end/symbol-registry.h>


// Generated from ./grammar/CactParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace cactfrontend {


class  CactParser : public antlr4::Parser {
public:
  enum {
    BooleanConstant = 1, Const = 2, Int32 = 3, Bool = 4, Float = 5, Double = 6, 
    Void = 7, If = 8, Else = 9, While = 10, Break = 11, Continue = 12, Return = 13, 
    LeftBracket = 14, RightBracket = 15, LeftParenthesis = 16, RightParenthesis = 17, 
    ExclamationMark = 18, Asterisk = 19, Slash = 20, Percent = 21, Minus = 22, 
    Plus = 23, Less = 24, LessEqual = 25, Greater = 26, GreaterEqual = 27, 
    LogicalEqual = 28, NotEqual = 29, LogicalAnd = 30, LogicalOr = 31, LeftBrace = 32, 
    RightBrace = 33, Equal = 34, Comma = 35, Semicolon = 36, Identifier = 37, 
    IntegerConstant = 38, FloatConstant = 39, DoubleConstant = 40, LineComment = 41, 
    BlockComment = 42, NewLine = 43, WhiteSpaces = 44
  };

  enum {
    RuleCompilationUnit = 0, RuleDeclaration = 1, RuleConstantDeclaration = 2, 
    RuleDataType = 3, RuleConstantDefinition = 4, RuleConstantInitialValue = 5, 
    RuleVariableDeclaration = 6, RuleVariableDefinition = 7, RuleFunctionDefinition = 8, 
    RuleFunctionType = 9, RuleFunctionParameters = 10, RuleFunctionParameter = 11, 
    RuleBlock = 12, RuleBlockItem = 13, RuleStatement = 14, RuleAssignStatement = 15, 
    RuleExpressionStatement = 16, RuleReturnStatement = 17, RuleIfStatement = 18, 
    RuleWhileStatement = 19, RuleBreakStatement = 20, RuleContinueStatement = 21, 
    RuleExpression = 22, RuleConstantExpression = 23, RuleCondition = 24, 
    RuleLeftValue = 25, RulePrimaryExpression = 26, RuleNumber = 27, RuleUnaryExpression = 28, 
    RuleFunctionArguments = 29, RuleMulExpression = 30, RuleAddExpression = 31, 
    RuleRelationalExpression = 32, RuleLogicalEqualExpression = 33, RuleLogicalAndExpression = 34, 
    RuleLogicalOrExpression = 35
  };

  explicit CactParser(antlr4::TokenStream *input);

  CactParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CactParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CompilationUnitContext;
  class DeclarationContext;
  class ConstantDeclarationContext;
  class DataTypeContext;
  class ConstantDefinitionContext;
  class ConstantInitialValueContext;
  class VariableDeclarationContext;
  class VariableDefinitionContext;
  class FunctionDefinitionContext;
  class FunctionTypeContext;
  class FunctionParametersContext;
  class FunctionParameterContext;
  class BlockContext;
  class BlockItemContext;
  class StatementContext;
  class AssignStatementContext;
  class ExpressionStatementContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class WhileStatementContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class ConditionContext;
  class LeftValueContext;
  class PrimaryExpressionContext;
  class NumberContext;
  class UnaryExpressionContext;
  class FunctionArgumentsContext;
  class MulExpressionContext;
  class AddExpressionContext;
  class RelationalExpressionContext;
  class LogicalEqualExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<FunctionDefinitionContext *> functionDefinition();
    FunctionDefinitionContext* functionDefinition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    VariableDeclarationContext *variableDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    DataTypeContext *dataType();
    std::vector<ConstantDefinitionContext *> constantDefinition();
    ConstantDefinitionContext* constantDefinition(size_t i);
    antlr4::tree::TerminalNode *Semicolon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Int32();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  ConstantDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType need_type;
    std::shared_ptr<CactConstVar> constant;
    std::vector<std::variant<int32_t, float, double, bool>> value;
    ConstantDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equal();
    ConstantInitialValueContext *constantInitialValue();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IntegerConstant();
    antlr4::tree::TerminalNode* IntegerConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionContext* constantDefinition();

  class  ConstantInitialValueContext : public antlr4::ParserRuleContext {
  public:
    uint32_t current_dim;
    CactType type;
    bool flat_flag;
    std::vector<std::variant<int32_t, float, double, bool>> value;
    ConstantInitialValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<ConstantInitialValueContext *> constantInitialValue();
    ConstantInitialValueContext* constantInitialValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantInitialValueContext* constantInitialValue();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType need_type;
    std::vector<std::variant<int32_t, float, double, bool>> value;
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    std::vector<VariableDefinitionContext *> variableDefinition();
    VariableDefinitionContext* variableDefinition(size_t i);
    antlr4::tree::TerminalNode *Semicolon();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType need_type;
    std::shared_ptr<CactConstVar> variable;
    std::vector<std::variant<int32_t, float, double, bool>> value;
    VariableDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IntegerConstant();
    antlr4::tree::TerminalNode* IntegerConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    antlr4::tree::TerminalNode *Equal();
    ConstantInitialValueContext *constantInitialValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDefinitionContext* variableDefinition();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    observer_ptr<Scope> scope;
    observer_ptr<CactFunction> function;
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionTypeContext *functionType();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    BlockContext *block();
    FunctionParametersContext *functionParameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Int32();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Bool();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  FunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParametersContext* functionParameters();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<CactConstVar> parameter;
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IntegerConstant();
    antlr4::tree::TerminalNode* IntegerConstant(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    observer_ptr<Scope> scope;
    bool has_return;
    bool in_func_def;
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<BlockItemContext *> blockItem();
    BlockItemContext* blockItem(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BlockItemContext : public antlr4::ParserRuleContext {
  public:
    bool has_return;
    BlockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockItemContext* blockItem();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    bool has_return;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignStatementContext *assignStatement();
    ExpressionStatementContext *expressionStatement();
    BlockContext *block();
    ReturnStatementContext *returnStatement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AssignStatementContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<CactExpr> lvalue;
    std::shared_ptr<CactExpr> expr;
    AssignStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeftValueContext *leftValue();
    antlr4::tree::TerminalNode *Equal();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semicolon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStatementContext* assignStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<CactExpr> expr;
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<CactExpr> expr;
    observer_ptr<CactFunction> ret_to_which_function;
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Semicolon();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    bool has_return;
    std::shared_ptr<CactExpr> cond_expr;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParenthesis();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<CactExpr> cond_expr;
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParenthesis();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    observer_ptr<WhileStatementContext> to_which_loop;
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semicolon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    observer_ptr<WhileStatementContext> to_which_loop;
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Semicolon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddExpressionContext *addExpression();
    antlr4::tree::TerminalNode *BooleanConstant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType basic_type;
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *BooleanConstant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  LeftValueContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    std::shared_ptr<CactConstVar> symbol;
    LeftValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftValueContext* leftValue();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParenthesis();
    LeftValueContext *leftValue();
    NumberContext *number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType basic_type;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerConstant();
    antlr4::tree::TerminalNode *FloatConstant();
    antlr4::tree::TerminalNode *DoubleConstant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    std::shared_ptr<UnaryOperator> unary_operator;
    observer_ptr<CactFunction> function;
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    FunctionArgumentsContext *functionArguments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  FunctionArgumentsContext : public antlr4::ParserRuleContext {
  public:
    FuncParameters need_params;
    FunctionArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgumentsContext* functionArguments();

  class  MulExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    std::shared_ptr<BinaryOperator> binary_operator;
    MulExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    MulExpressionContext *mulExpression();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *Slash();
    antlr4::tree::TerminalNode *Percent();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulExpressionContext* mulExpression();
  MulExpressionContext* mulExpression(int precedence);
  class  AddExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactType type;
    std::shared_ptr<BinaryOperator> binary_operator;
    AddExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MulExpressionContext *mulExpression();
    AddExpressionContext *addExpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddExpressionContext* addExpression();
  AddExpressionContext* addExpression(int precedence);
  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    CactBasicType basic_type;
    std::shared_ptr<BinaryOperator> binary_operator;
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanConstant();
    std::vector<AddExpressionContext *> addExpression();
    AddExpressionContext* addExpression(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *GreaterEqual();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  LogicalEqualExpressionContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<BinaryOperator> binary_operator;
    LogicalEqualExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    antlr4::tree::TerminalNode *LogicalEqual();
    antlr4::tree::TerminalNode *NotEqual();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalEqualExpressionContext* logicalEqualExpression();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<BinaryOperator> binary_operator;
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalEqualExpressionContext *logicalEqualExpression();
    LogicalAndExpressionContext *logicalAndExpression();
    antlr4::tree::TerminalNode *LogicalAnd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();
  LogicalAndExpressionContext* logicalAndExpression(int precedence);
  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<BinaryOperator> binary_operator;
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalAndExpressionContext *logicalAndExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *LogicalOr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();
  LogicalOrExpressionContext* logicalOrExpression(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool mulExpressionSempred(MulExpressionContext *_localctx, size_t predicateIndex);
  bool addExpressionSempred(AddExpressionContext *_localctx, size_t predicateIndex);
  bool logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex);
  bool logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace cactfrontend
