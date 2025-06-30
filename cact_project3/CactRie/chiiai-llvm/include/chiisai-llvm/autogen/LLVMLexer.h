
// Generated from ./grammar/LLVMLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace llvm {


class  LLVMLexer : public antlr4::Lexer {
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

  explicit LLVMLexer(antlr4::CharStream *input);

  ~LLVMLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace llvm
