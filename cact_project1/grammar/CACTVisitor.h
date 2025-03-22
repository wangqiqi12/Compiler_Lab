
    #include <vector>


// Generated from ./CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CACTParser.
 */
class  CACTVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CACTParser.
   */
    virtual std::any visitCompUnit(CACTParser::CompUnitContext *context) = 0;

    virtual std::any visitDecl(CACTParser::DeclContext *context) = 0;

    virtual std::any visitConstDecl(CACTParser::ConstDeclContext *context) = 0;

    virtual std::any visitBType(CACTParser::BTypeContext *context) = 0;

    virtual std::any visitConstDef(CACTParser::ConstDefContext *context) = 0;

    virtual std::any visitConstInitVal(CACTParser::ConstInitValContext *context) = 0;

    virtual std::any visitVarDecl(CACTParser::VarDeclContext *context) = 0;

    virtual std::any visitVarDef(CACTParser::VarDefContext *context) = 0;

    virtual std::any visitFuncDef(CACTParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncType(CACTParser::FuncTypeContext *context) = 0;

    virtual std::any visitFuncFParams(CACTParser::FuncFParamsContext *context) = 0;

    virtual std::any visitFuncFParam(CACTParser::FuncFParamContext *context) = 0;

    virtual std::any visitBlock(CACTParser::BlockContext *context) = 0;

    virtual std::any visitBlockItem(CACTParser::BlockItemContext *context) = 0;

    virtual std::any visitStmt(CACTParser::StmtContext *context) = 0;

    virtual std::any visitExp(CACTParser::ExpContext *context) = 0;

    virtual std::any visitConstEXP(CACTParser::ConstEXPContext *context) = 0;

    virtual std::any visitCond(CACTParser::CondContext *context) = 0;

    virtual std::any visitLVal(CACTParser::LValContext *context) = 0;

    virtual std::any visitPrimaryExp(CACTParser::PrimaryExpContext *context) = 0;

    virtual std::any visitNumber(CACTParser::NumberContext *context) = 0;

    virtual std::any visitUnaryExp(CACTParser::UnaryExpContext *context) = 0;

    virtual std::any visitFuncRParams(CACTParser::FuncRParamsContext *context) = 0;

    virtual std::any visitMulExp(CACTParser::MulExpContext *context) = 0;

    virtual std::any visitBoolConst(CACTParser::BoolConstContext *context) = 0;

    virtual std::any visitAddExp(CACTParser::AddExpContext *context) = 0;

    virtual std::any visitRelExp(CACTParser::RelExpContext *context) = 0;

    virtual std::any visitEqExp(CACTParser::EqExpContext *context) = 0;

    virtual std::any visitLAndExp(CACTParser::LAndExpContext *context) = 0;

    virtual std::any visitLOrExp(CACTParser::LOrExpContext *context) = 0;


};

