
    #include <vector>


// Generated from ./CACT.g4 by ANTLR 4.13.1


#include "CACTLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CACTLexerStaticData final {
  CACTLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CACTLexerStaticData(const CACTLexerStaticData&) = delete;
  CACTLexerStaticData(CACTLexerStaticData&&) = delete;
  CACTLexerStaticData& operator=(const CACTLexerStaticData&) = delete;
  CACTLexerStaticData& operator=(CACTLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cactlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CACTLexerStaticData *cactlexerLexerStaticData = nullptr;

void cactlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cactlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(cactlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CACTLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "INT", "BOOL", "DOUBLE", "FLOAT", "WHILE", "BREAK", "CONTINUE", 
      "IF", "ELSE", "RETURN", "VOID", "CONST", "TRUE", "FALSE", "ADD", "SUB", 
      "MUL", "DIV", "MOD", "NOT", "NEQ", "EQ", "GT", "LT", "GE", "LE", "AND", 
      "OR", "Ident", "IntConst", "DecimalConst", "OctalConst", "HexadeConst", 
      "FloatConst", "DoubleConst", "PreFDConst", "DoubleVal", "Exponent", 
      "NewLine", "WhiteSpace", "LineComment", "BlockComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "','", "';'", "'['", "']'", "'='", "'{'", "'}'", "'('", "')'", 
      "' )'", "'int'", "'bool'", "'double'", "'float'", "'while'", "'break'", 
      "'continue'", "'if'", "'else'", "'return'", "'void'", "'const'", "'true'", 
      "'false'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'!='", "'=='", 
      "'>'", "'<'", "'>='", "'<='", "'&&'", "'||'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "INT", "BOOL", "DOUBLE", 
      "FLOAT", "WHILE", "BREAK", "CONTINUE", "IF", "ELSE", "RETURN", "VOID", 
      "CONST", "TRUE", "FALSE", "ADD", "SUB", "MUL", "DIV", "MOD", "NOT", 
      "NEQ", "EQ", "GT", "LT", "GE", "LE", "AND", "OR", "Ident", "IntConst", 
      "FloatConst", "DoubleConst", "NewLine", "WhiteSpace", "LineComment", 
      "BlockComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,46,372,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,
  	1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,
  	1,34,1,35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,37,1,38,1,38,5,38,243,
  	8,38,10,38,12,38,246,9,38,1,39,1,39,1,39,3,39,251,8,39,1,40,1,40,1,40,
  	5,40,256,8,40,10,40,12,40,259,9,40,3,40,261,8,40,1,41,1,41,4,41,265,8,
  	41,11,41,12,41,266,1,42,1,42,1,42,1,42,3,42,273,8,42,1,42,4,42,276,8,
  	42,11,42,12,42,277,1,43,1,43,1,43,1,44,1,44,1,45,1,45,3,45,287,8,45,1,
  	45,4,45,290,8,45,11,45,12,45,291,1,45,3,45,295,8,45,1,46,4,46,298,8,46,
  	11,46,12,46,299,1,46,1,46,4,46,304,8,46,11,46,12,46,305,1,46,4,46,309,
  	8,46,11,46,12,46,310,1,46,1,46,1,46,4,46,316,8,46,11,46,12,46,317,3,46,
  	320,8,46,1,47,1,47,1,47,3,47,325,8,47,1,47,4,47,328,8,47,11,47,12,47,
  	329,1,48,1,48,3,48,334,8,48,1,48,3,48,337,8,48,1,48,1,48,1,49,4,49,342,
  	8,49,11,49,12,49,343,1,49,1,49,1,50,1,50,1,50,1,50,5,50,352,8,50,10,50,
  	12,50,355,9,50,1,50,1,50,1,51,1,51,1,51,1,51,5,51,363,8,51,10,51,12,51,
  	366,9,51,1,51,1,51,1,51,1,51,1,51,1,364,0,52,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,0,83,
  	0,85,0,87,41,89,42,91,0,93,0,95,0,97,43,99,44,101,45,103,46,1,0,10,3,
  	0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,49,57,1,0,48,57,
  	1,0,48,55,3,0,48,57,65,70,97,102,2,0,70,70,102,102,2,0,69,69,101,101,
  	2,0,9,9,32,32,2,0,10,10,13,13,390,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,87,1,
  	0,0,0,0,89,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,
  	0,0,1,105,1,0,0,0,3,107,1,0,0,0,5,109,1,0,0,0,7,111,1,0,0,0,9,113,1,0,
  	0,0,11,115,1,0,0,0,13,117,1,0,0,0,15,119,1,0,0,0,17,121,1,0,0,0,19,123,
  	1,0,0,0,21,126,1,0,0,0,23,130,1,0,0,0,25,135,1,0,0,0,27,142,1,0,0,0,29,
  	148,1,0,0,0,31,154,1,0,0,0,33,160,1,0,0,0,35,169,1,0,0,0,37,172,1,0,0,
  	0,39,177,1,0,0,0,41,184,1,0,0,0,43,189,1,0,0,0,45,195,1,0,0,0,47,200,
  	1,0,0,0,49,206,1,0,0,0,51,208,1,0,0,0,53,210,1,0,0,0,55,212,1,0,0,0,57,
  	214,1,0,0,0,59,216,1,0,0,0,61,218,1,0,0,0,63,221,1,0,0,0,65,224,1,0,0,
  	0,67,226,1,0,0,0,69,228,1,0,0,0,71,231,1,0,0,0,73,234,1,0,0,0,75,237,
  	1,0,0,0,77,240,1,0,0,0,79,250,1,0,0,0,81,260,1,0,0,0,83,262,1,0,0,0,85,
  	272,1,0,0,0,87,279,1,0,0,0,89,282,1,0,0,0,91,294,1,0,0,0,93,319,1,0,0,
  	0,95,321,1,0,0,0,97,336,1,0,0,0,99,341,1,0,0,0,101,347,1,0,0,0,103,358,
  	1,0,0,0,105,106,5,44,0,0,106,2,1,0,0,0,107,108,5,59,0,0,108,4,1,0,0,0,
  	109,110,5,91,0,0,110,6,1,0,0,0,111,112,5,93,0,0,112,8,1,0,0,0,113,114,
  	5,61,0,0,114,10,1,0,0,0,115,116,5,123,0,0,116,12,1,0,0,0,117,118,5,125,
  	0,0,118,14,1,0,0,0,119,120,5,40,0,0,120,16,1,0,0,0,121,122,5,41,0,0,122,
  	18,1,0,0,0,123,124,5,32,0,0,124,125,5,41,0,0,125,20,1,0,0,0,126,127,5,
  	105,0,0,127,128,5,110,0,0,128,129,5,116,0,0,129,22,1,0,0,0,130,131,5,
  	98,0,0,131,132,5,111,0,0,132,133,5,111,0,0,133,134,5,108,0,0,134,24,1,
  	0,0,0,135,136,5,100,0,0,136,137,5,111,0,0,137,138,5,117,0,0,138,139,5,
  	98,0,0,139,140,5,108,0,0,140,141,5,101,0,0,141,26,1,0,0,0,142,143,5,102,
  	0,0,143,144,5,108,0,0,144,145,5,111,0,0,145,146,5,97,0,0,146,147,5,116,
  	0,0,147,28,1,0,0,0,148,149,5,119,0,0,149,150,5,104,0,0,150,151,5,105,
  	0,0,151,152,5,108,0,0,152,153,5,101,0,0,153,30,1,0,0,0,154,155,5,98,0,
  	0,155,156,5,114,0,0,156,157,5,101,0,0,157,158,5,97,0,0,158,159,5,107,
  	0,0,159,32,1,0,0,0,160,161,5,99,0,0,161,162,5,111,0,0,162,163,5,110,0,
  	0,163,164,5,116,0,0,164,165,5,105,0,0,165,166,5,110,0,0,166,167,5,117,
  	0,0,167,168,5,101,0,0,168,34,1,0,0,0,169,170,5,105,0,0,170,171,5,102,
  	0,0,171,36,1,0,0,0,172,173,5,101,0,0,173,174,5,108,0,0,174,175,5,115,
  	0,0,175,176,5,101,0,0,176,38,1,0,0,0,177,178,5,114,0,0,178,179,5,101,
  	0,0,179,180,5,116,0,0,180,181,5,117,0,0,181,182,5,114,0,0,182,183,5,110,
  	0,0,183,40,1,0,0,0,184,185,5,118,0,0,185,186,5,111,0,0,186,187,5,105,
  	0,0,187,188,5,100,0,0,188,42,1,0,0,0,189,190,5,99,0,0,190,191,5,111,0,
  	0,191,192,5,110,0,0,192,193,5,115,0,0,193,194,5,116,0,0,194,44,1,0,0,
  	0,195,196,5,116,0,0,196,197,5,114,0,0,197,198,5,117,0,0,198,199,5,101,
  	0,0,199,46,1,0,0,0,200,201,5,102,0,0,201,202,5,97,0,0,202,203,5,108,0,
  	0,203,204,5,115,0,0,204,205,5,101,0,0,205,48,1,0,0,0,206,207,5,43,0,0,
  	207,50,1,0,0,0,208,209,5,45,0,0,209,52,1,0,0,0,210,211,5,42,0,0,211,54,
  	1,0,0,0,212,213,5,47,0,0,213,56,1,0,0,0,214,215,5,37,0,0,215,58,1,0,0,
  	0,216,217,5,33,0,0,217,60,1,0,0,0,218,219,5,33,0,0,219,220,5,61,0,0,220,
  	62,1,0,0,0,221,222,5,61,0,0,222,223,5,61,0,0,223,64,1,0,0,0,224,225,5,
  	62,0,0,225,66,1,0,0,0,226,227,5,60,0,0,227,68,1,0,0,0,228,229,5,62,0,
  	0,229,230,5,61,0,0,230,70,1,0,0,0,231,232,5,60,0,0,232,233,5,61,0,0,233,
  	72,1,0,0,0,234,235,5,38,0,0,235,236,5,38,0,0,236,74,1,0,0,0,237,238,5,
  	124,0,0,238,239,5,124,0,0,239,76,1,0,0,0,240,244,7,0,0,0,241,243,7,1,
  	0,0,242,241,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,
  	78,1,0,0,0,246,244,1,0,0,0,247,251,3,81,40,0,248,251,3,83,41,0,249,251,
  	3,85,42,0,250,247,1,0,0,0,250,248,1,0,0,0,250,249,1,0,0,0,251,80,1,0,
  	0,0,252,261,5,48,0,0,253,257,7,2,0,0,254,256,7,3,0,0,255,254,1,0,0,0,
  	256,259,1,0,0,0,257,255,1,0,0,0,257,258,1,0,0,0,258,261,1,0,0,0,259,257,
  	1,0,0,0,260,252,1,0,0,0,260,253,1,0,0,0,261,82,1,0,0,0,262,264,5,48,0,
  	0,263,265,7,4,0,0,264,263,1,0,0,0,265,266,1,0,0,0,266,264,1,0,0,0,266,
  	267,1,0,0,0,267,84,1,0,0,0,268,269,5,48,0,0,269,273,5,120,0,0,270,271,
  	5,48,0,0,271,273,5,88,0,0,272,268,1,0,0,0,272,270,1,0,0,0,273,275,1,0,
  	0,0,274,276,7,5,0,0,275,274,1,0,0,0,276,277,1,0,0,0,277,275,1,0,0,0,277,
  	278,1,0,0,0,278,86,1,0,0,0,279,280,3,91,45,0,280,281,7,6,0,0,281,88,1,
  	0,0,0,282,283,3,91,45,0,283,90,1,0,0,0,284,286,3,93,46,0,285,287,3,95,
  	47,0,286,285,1,0,0,0,286,287,1,0,0,0,287,295,1,0,0,0,288,290,7,3,0,0,
  	289,288,1,0,0,0,290,291,1,0,0,0,291,289,1,0,0,0,291,292,1,0,0,0,292,293,
  	1,0,0,0,293,295,3,95,47,0,294,284,1,0,0,0,294,289,1,0,0,0,295,92,1,0,
  	0,0,296,298,7,3,0,0,297,296,1,0,0,0,298,299,1,0,0,0,299,297,1,0,0,0,299,
  	300,1,0,0,0,300,301,1,0,0,0,301,303,5,46,0,0,302,304,7,3,0,0,303,302,
  	1,0,0,0,304,305,1,0,0,0,305,303,1,0,0,0,305,306,1,0,0,0,306,320,1,0,0,
  	0,307,309,7,3,0,0,308,307,1,0,0,0,309,310,1,0,0,0,310,308,1,0,0,0,310,
  	311,1,0,0,0,311,312,1,0,0,0,312,320,5,46,0,0,313,315,5,46,0,0,314,316,
  	7,3,0,0,315,314,1,0,0,0,316,317,1,0,0,0,317,315,1,0,0,0,317,318,1,0,0,
  	0,318,320,1,0,0,0,319,297,1,0,0,0,319,308,1,0,0,0,319,313,1,0,0,0,320,
  	94,1,0,0,0,321,324,7,7,0,0,322,325,3,49,24,0,323,325,3,51,25,0,324,322,
  	1,0,0,0,324,323,1,0,0,0,324,325,1,0,0,0,325,327,1,0,0,0,326,328,7,3,0,
  	0,327,326,1,0,0,0,328,329,1,0,0,0,329,327,1,0,0,0,329,330,1,0,0,0,330,
  	96,1,0,0,0,331,333,5,13,0,0,332,334,5,10,0,0,333,332,1,0,0,0,333,334,
  	1,0,0,0,334,337,1,0,0,0,335,337,5,10,0,0,336,331,1,0,0,0,336,335,1,0,
  	0,0,337,338,1,0,0,0,338,339,6,48,0,0,339,98,1,0,0,0,340,342,7,8,0,0,341,
  	340,1,0,0,0,342,343,1,0,0,0,343,341,1,0,0,0,343,344,1,0,0,0,344,345,1,
  	0,0,0,345,346,6,49,0,0,346,100,1,0,0,0,347,348,5,47,0,0,348,349,5,47,
  	0,0,349,353,1,0,0,0,350,352,8,9,0,0,351,350,1,0,0,0,352,355,1,0,0,0,353,
  	351,1,0,0,0,353,354,1,0,0,0,354,356,1,0,0,0,355,353,1,0,0,0,356,357,6,
  	50,0,0,357,102,1,0,0,0,358,359,5,47,0,0,359,360,5,42,0,0,360,364,1,0,
  	0,0,361,363,9,0,0,0,362,361,1,0,0,0,363,366,1,0,0,0,364,365,1,0,0,0,364,
  	362,1,0,0,0,365,367,1,0,0,0,366,364,1,0,0,0,367,368,5,42,0,0,368,369,
  	5,47,0,0,369,370,1,0,0,0,370,371,6,51,0,0,371,104,1,0,0,0,23,0,244,250,
  	257,260,266,272,277,286,291,294,299,305,310,317,319,324,329,333,336,343,
  	353,364,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cactlexerLexerStaticData = staticData.release();
}

}

CACTLexer::CACTLexer(CharStream *input) : Lexer(input) {
  CACTLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cactlexerLexerStaticData->atn, cactlexerLexerStaticData->decisionToDFA, cactlexerLexerStaticData->sharedContextCache);
}

CACTLexer::~CACTLexer() {
  delete _interpreter;
}

std::string CACTLexer::getGrammarFileName() const {
  return "CACT.g4";
}

const std::vector<std::string>& CACTLexer::getRuleNames() const {
  return cactlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CACTLexer::getChannelNames() const {
  return cactlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CACTLexer::getModeNames() const {
  return cactlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CACTLexer::getVocabulary() const {
  return cactlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CACTLexer::getSerializedATN() const {
  return cactlexerLexerStaticData->serializedATN;
}

const atn::ATN& CACTLexer::getATN() const {
  return *cactlexerLexerStaticData->atn;
}




void CACTLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cactlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(cactlexerLexerOnceFlag, cactlexerLexerInitialize);
#endif
}
