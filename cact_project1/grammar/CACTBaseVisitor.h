
    #include <vector>


// Generated from ./CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTVisitor.h"


/**
 * This class provides an empty implementation of CACTVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CACTBaseVisitor : public CACTVisitor {
public:

  virtual std::any visitCompUnit(CACTParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(CACTParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDecl(CACTParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBType(CACTParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDef(CACTParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstInitVal(CACTParser::ConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(CACTParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDef(CACTParser::VarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(CACTParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(CACTParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParams(CACTParser::FuncFParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParam(CACTParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(CACTParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItem(CACTParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(CACTParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(CACTParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstEXP(CACTParser::ConstEXPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(CACTParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLVal(CACTParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExp(CACTParser::PrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(CACTParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExp(CACTParser::UnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncRParams(CACTParser::FuncRParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExp(CACTParser::MulExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolConst(CACTParser::BoolConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExp(CACTParser::AddExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExp(CACTParser::RelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExp(CACTParser::EqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLAndExp(CACTParser::LAndExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOrExp(CACTParser::LOrExpContext *ctx) override {
    return visitChildren(ctx);
  }


};

