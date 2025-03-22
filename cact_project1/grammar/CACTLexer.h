
    #include <vector>


// Generated from ./CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CACTLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, INT = 11, BOOL = 12, DOUBLE = 13, FLOAT = 14, 
    WHILE = 15, BREAK = 16, CONTINUE = 17, IF = 18, ELSE = 19, RETURN = 20, 
    VOID = 21, CONST = 22, TRUE = 23, FALSE = 24, ADD = 25, SUB = 26, MUL = 27, 
    DIV = 28, MOD = 29, NOT = 30, NEQ = 31, EQ = 32, GT = 33, LT = 34, GE = 35, 
    LE = 36, AND = 37, OR = 38, Ident = 39, IntConst = 40, FloatConst = 41, 
    DoubleConst = 42, NewLine = 43, WhiteSpace = 44, LineComment = 45, BlockComment = 46
  };

  explicit CACTLexer(antlr4::CharStream *input);

  ~CACTLexer() override;


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

