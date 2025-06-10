
// Generated from ./grammar/CactLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace cactfrontend {


class  CactLexer : public antlr4::Lexer {
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

  explicit CactLexer(antlr4::CharStream *input);

  ~CactLexer() override;


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

}  // namespace cactfrontend
