
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


#include "LLVMParserVisitor.h"

#include "LLVMParser.h"


using namespace antlrcpp;
using namespace llvm;

using namespace antlr4;

namespace {

struct LLVMParserStaticData final {
  LLVMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LLVMParserStaticData(const LLVMParserStaticData&) = delete;
  LLVMParserStaticData(LLVMParserStaticData&&) = delete;
  LLVMParserStaticData& operator=(const LLVMParserStaticData&) = delete;
  LLVMParserStaticData& operator=(LLVMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag llvmparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LLVMParserStaticData *llvmparserParserStaticData = nullptr;

void llvmparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (llvmparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(llvmparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LLVMParserStaticData>(
    std::vector<std::string>{
      "scalarType", "basicType", "type", "pointerType", "arrayType", "globalIdentifier", 
      "localIdentifier", "variable", "literal", "immediatelyUsableValue", 
      "module", "initializer", "constantArray", "globalDeclaration", "functionDeclaration", 
      "functionDefinition", "functionArguments", "parameterList", "parameter", 
      "basicBlock", "instruction", "returnInstruction", "branchInstruction", 
      "callInstruction", "arithmeticInstruction", "loadInstruction", "storeInstruction", 
      "phiInstruction", "phiValue", "comparisonOperation", "comparisonInstruction", 
      "allocaInstruction", "binaryOperation", "comparisonPredicate", "terminatorInstruction", 
      "gepInstruction"
    },
    std::vector<std::string>{
      "", "'global'", "'constant'", "'external'", "'define'", "'declare'", 
      "'align'", "'unreachable'", "'br'", "'ret'", "'call'", "'load'", "'store'", 
      "'alloca'", "'getelementptr'", "'phi'", "'add'", "'fadd'", "'sub'", 
      "'fsub'", "'mul'", "'fmul'", "'sdiv'", "'fdiv'", "'and'", "'srem'", 
      "'or'", "'xor'", "'shl'", "'lshr'", "'ashr'", "'icmp'", "'fcmp'", 
      "'sext'", "'zext'", "'trunc'", "'label'", "'void'", "'ptr'", "'i1'", 
      "'i32'", "'int'", "'i64'", "'float'", "'double'", "'eq'", "'ne'", 
      "'ugt'", "'uge'", "'ult'", "'ule'", "'sgt'", "'sge'", "'slt'", "'sle'", 
      "'oeq'", "'one'", "'ogt'", "'oge'", "'olt'", "'ole'", "'='", "','", 
      "'('", "')'", "'{'", "'}'", "'['", "']'", "'@'", "'%'", "'*'", "':'", 
      "'x'", "'-'", "'source_filename'"
    },
    std::vector<std::string>{
      "", "Global", "ConstantStr", "External", "Define", "Declare", "Align", 
      "Unreachable", "Br", "Ret", "Call", "Load", "Store", "Alloca", "GetElementPtr", 
      "Phi", "Add", "FAdd", "Sub", "FSub", "Mul", "FMul", "Div", "FDiv", 
      "And", "Srem", "Or", "Xor", "Shl", "Lshr", "Ashr", "Icmp", "Fcmp", 
      "Sext", "Zext", "Trunc", "Label", "Void", "Ptr", "I1", "I32", "Int", 
      "I64", "Float", "Double", "Eq", "Ne", "Ugt", "Uge", "Ult", "Ule", 
      "Sgt", "Sge", "Slt", "Sle", "Oeq", "One", "Ogt", "Oge", "Olt", "Ole", 
      "Equals", "Comma", "LeftParen", "RightParen", "LeftBrace", "RightBrace", 
      "LeftBracket", "RightBracket", "At", "Percent", "Asterisk", "Colon", 
      "Cross", "Minus", "SourceFilename", "GlobalName", "LocalName", "LabelName", 
      "IntegerLiteral", "HexLiteral", "Whitespace", "Comment", "SourceFileComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,83,363,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,1,0,1,0,1,1,1,1,3,1,77,8,1,1,2,1,2,1,2,3,2,82,8,2,1,3,1,3,1,3,4,3,
  	87,8,3,11,3,12,3,88,1,3,1,3,4,3,93,8,3,11,3,12,3,94,3,3,97,8,3,1,3,1,
  	3,4,3,101,8,3,11,3,12,3,102,5,3,105,8,3,10,3,12,3,108,9,3,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,3,6,121,8,6,1,7,1,7,3,7,125,8,7,1,8,3,
  	8,128,8,8,1,8,1,8,3,8,132,8,8,1,9,1,9,3,9,136,8,9,1,10,1,10,1,10,5,10,
  	141,8,10,10,10,12,10,144,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	153,8,11,1,12,1,12,1,12,1,12,1,12,5,12,160,8,12,10,12,12,12,163,9,12,
  	3,12,165,8,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,176,8,
  	13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,5,15,189,8,
  	15,10,15,12,15,192,9,15,1,15,3,15,195,8,15,1,16,1,16,3,16,199,8,16,1,
  	16,1,16,1,17,1,17,1,17,5,17,206,8,17,10,17,12,17,209,9,17,1,18,1,18,3,
  	18,213,8,18,1,19,1,19,5,19,217,8,19,10,19,12,19,220,9,19,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,231,8,20,1,21,1,21,1,21,1,21,1,
  	21,3,21,238,8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,3,22,253,8,22,1,23,1,23,1,23,3,23,258,8,23,1,23,1,23,1,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,3,25,284,8,25,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,3,26,296,8,26,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,5,27,305,8,27,10,27,12,27,308,9,27,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,
  	1,31,1,31,1,31,1,31,1,31,3,31,334,8,31,1,31,1,31,1,31,3,31,339,8,31,1,
  	32,1,32,1,33,1,33,1,34,1,34,3,34,347,8,34,1,35,1,35,1,35,1,35,1,35,1,
  	35,1,35,1,35,1,35,1,35,1,35,1,35,3,35,361,8,35,1,35,0,1,6,36,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,70,0,5,1,0,39,44,1,0,1,2,1,0,31,32,2,0,16,23,25,
  	25,1,0,45,60,371,0,72,1,0,0,0,2,76,1,0,0,0,4,81,1,0,0,0,6,96,1,0,0,0,
  	8,109,1,0,0,0,10,115,1,0,0,0,12,120,1,0,0,0,14,124,1,0,0,0,16,131,1,0,
  	0,0,18,135,1,0,0,0,20,142,1,0,0,0,22,152,1,0,0,0,24,154,1,0,0,0,26,168,
  	1,0,0,0,28,177,1,0,0,0,30,182,1,0,0,0,32,196,1,0,0,0,34,202,1,0,0,0,36,
  	210,1,0,0,0,38,214,1,0,0,0,40,230,1,0,0,0,42,232,1,0,0,0,44,252,1,0,0,
  	0,46,257,1,0,0,0,48,264,1,0,0,0,50,272,1,0,0,0,52,285,1,0,0,0,54,297,
  	1,0,0,0,56,309,1,0,0,0,58,315,1,0,0,0,60,317,1,0,0,0,62,326,1,0,0,0,64,
  	340,1,0,0,0,66,342,1,0,0,0,68,346,1,0,0,0,70,348,1,0,0,0,72,73,7,0,0,
  	0,73,1,1,0,0,0,74,77,5,37,0,0,75,77,3,0,0,0,76,74,1,0,0,0,76,75,1,0,0,
  	0,77,3,1,0,0,0,78,82,3,2,1,0,79,82,3,6,3,0,80,82,3,8,4,0,81,78,1,0,0,
  	0,81,79,1,0,0,0,81,80,1,0,0,0,82,5,1,0,0,0,83,84,6,3,-1,0,84,86,3,2,1,
  	0,85,87,5,71,0,0,86,85,1,0,0,0,87,88,1,0,0,0,88,86,1,0,0,0,88,89,1,0,
  	0,0,89,97,1,0,0,0,90,92,3,8,4,0,91,93,5,71,0,0,92,91,1,0,0,0,93,94,1,
  	0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,83,1,0,0,0,96,90,1,
  	0,0,0,97,106,1,0,0,0,98,100,10,2,0,0,99,101,5,71,0,0,100,99,1,0,0,0,101,
  	102,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,0,104,98,1,
  	0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,7,1,0,0,0,108,
  	106,1,0,0,0,109,110,5,67,0,0,110,111,5,79,0,0,111,112,5,73,0,0,112,113,
  	3,4,2,0,113,114,5,68,0,0,114,9,1,0,0,0,115,116,5,76,0,0,116,11,1,0,0,
  	0,117,121,5,77,0,0,118,119,5,70,0,0,119,121,5,79,0,0,120,117,1,0,0,0,
  	120,118,1,0,0,0,121,13,1,0,0,0,122,125,3,10,5,0,123,125,3,12,6,0,124,
  	122,1,0,0,0,124,123,1,0,0,0,125,15,1,0,0,0,126,128,5,74,0,0,127,126,1,
  	0,0,0,127,128,1,0,0,0,128,129,1,0,0,0,129,132,5,79,0,0,130,132,5,80,0,
  	0,131,127,1,0,0,0,131,130,1,0,0,0,132,17,1,0,0,0,133,136,3,12,6,0,134,
  	136,3,16,8,0,135,133,1,0,0,0,135,134,1,0,0,0,136,19,1,0,0,0,137,141,3,
  	26,13,0,138,141,3,28,14,0,139,141,3,30,15,0,140,137,1,0,0,0,140,138,1,
  	0,0,0,140,139,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,
  	143,21,1,0,0,0,144,142,1,0,0,0,145,146,3,0,0,0,146,147,5,79,0,0,147,153,
  	1,0,0,0,148,149,3,0,0,0,149,150,5,80,0,0,150,153,1,0,0,0,151,153,3,24,
  	12,0,152,145,1,0,0,0,152,148,1,0,0,0,152,151,1,0,0,0,153,23,1,0,0,0,154,
  	155,3,8,4,0,155,164,5,67,0,0,156,161,3,22,11,0,157,158,5,62,0,0,158,160,
  	3,22,11,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,161,162,1,0,
  	0,0,162,165,1,0,0,0,163,161,1,0,0,0,164,156,1,0,0,0,164,165,1,0,0,0,165,
  	166,1,0,0,0,166,167,5,68,0,0,167,25,1,0,0,0,168,169,3,10,5,0,169,170,
  	5,61,0,0,170,171,7,1,0,0,171,175,3,22,11,0,172,173,5,62,0,0,173,174,5,
  	6,0,0,174,176,5,79,0,0,175,172,1,0,0,0,175,176,1,0,0,0,176,27,1,0,0,0,
  	177,178,5,5,0,0,178,179,3,4,2,0,179,180,3,10,5,0,180,181,3,32,16,0,181,
  	29,1,0,0,0,182,183,5,4,0,0,183,184,3,4,2,0,184,185,3,10,5,0,185,194,3,
  	32,16,0,186,190,5,65,0,0,187,189,3,38,19,0,188,187,1,0,0,0,189,192,1,
  	0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,
  	193,195,5,66,0,0,194,186,1,0,0,0,194,195,1,0,0,0,195,31,1,0,0,0,196,198,
  	5,63,0,0,197,199,3,34,17,0,198,197,1,0,0,0,198,199,1,0,0,0,199,200,1,
  	0,0,0,200,201,5,64,0,0,201,33,1,0,0,0,202,207,3,36,18,0,203,204,5,62,
  	0,0,204,206,3,36,18,0,205,203,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,
  	207,208,1,0,0,0,208,35,1,0,0,0,209,207,1,0,0,0,210,212,3,4,2,0,211,213,
  	3,12,6,0,212,211,1,0,0,0,212,213,1,0,0,0,213,37,1,0,0,0,214,218,5,78,
  	0,0,215,217,3,40,20,0,216,215,1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,0,
  	218,219,1,0,0,0,219,39,1,0,0,0,220,218,1,0,0,0,221,231,3,46,23,0,222,
  	231,3,48,24,0,223,231,3,50,25,0,224,231,3,52,26,0,225,231,3,54,27,0,226,
  	231,3,60,30,0,227,231,3,62,31,0,228,231,3,68,34,0,229,231,3,70,35,0,230,
  	221,1,0,0,0,230,222,1,0,0,0,230,223,1,0,0,0,230,224,1,0,0,0,230,225,1,
  	0,0,0,230,226,1,0,0,0,230,227,1,0,0,0,230,228,1,0,0,0,230,229,1,0,0,0,
  	231,41,1,0,0,0,232,237,5,9,0,0,233,238,5,37,0,0,234,235,3,4,2,0,235,236,
  	3,18,9,0,236,238,1,0,0,0,237,233,1,0,0,0,237,234,1,0,0,0,238,43,1,0,0,
  	0,239,240,5,8,0,0,240,241,5,39,0,0,241,242,3,18,9,0,242,243,5,62,0,0,
  	243,244,5,36,0,0,244,245,3,12,6,0,245,246,5,62,0,0,246,247,5,36,0,0,247,
  	248,3,12,6,0,248,253,1,0,0,0,249,250,5,8,0,0,250,251,5,36,0,0,251,253,
  	3,12,6,0,252,239,1,0,0,0,252,249,1,0,0,0,253,45,1,0,0,0,254,255,3,12,
  	6,0,255,256,5,61,0,0,256,258,1,0,0,0,257,254,1,0,0,0,257,258,1,0,0,0,
  	258,259,1,0,0,0,259,260,5,10,0,0,260,261,3,4,2,0,261,262,3,10,5,0,262,
  	263,3,32,16,0,263,47,1,0,0,0,264,265,3,12,6,0,265,266,5,61,0,0,266,267,
  	3,64,32,0,267,268,3,4,2,0,268,269,3,18,9,0,269,270,5,62,0,0,270,271,3,
  	18,9,0,271,49,1,0,0,0,272,273,3,12,6,0,273,274,5,61,0,0,274,275,5,11,
  	0,0,275,276,3,4,2,0,276,277,5,62,0,0,277,278,3,4,2,0,278,279,5,71,0,0,
  	279,283,3,14,7,0,280,281,5,62,0,0,281,282,5,6,0,0,282,284,5,79,0,0,283,
  	280,1,0,0,0,283,284,1,0,0,0,284,51,1,0,0,0,285,286,5,12,0,0,286,287,3,
  	4,2,0,287,288,3,18,9,0,288,289,5,62,0,0,289,290,3,4,2,0,290,291,5,71,
  	0,0,291,295,3,14,7,0,292,293,5,62,0,0,293,294,5,6,0,0,294,296,5,79,0,
  	0,295,292,1,0,0,0,295,296,1,0,0,0,296,53,1,0,0,0,297,298,3,12,6,0,298,
  	299,5,61,0,0,299,300,5,15,0,0,300,301,3,4,2,0,301,306,3,56,28,0,302,303,
  	5,62,0,0,303,305,3,56,28,0,304,302,1,0,0,0,305,308,1,0,0,0,306,304,1,
  	0,0,0,306,307,1,0,0,0,307,55,1,0,0,0,308,306,1,0,0,0,309,310,5,65,0,0,
  	310,311,3,18,9,0,311,312,5,62,0,0,312,313,3,12,6,0,313,314,5,66,0,0,314,
  	57,1,0,0,0,315,316,7,2,0,0,316,59,1,0,0,0,317,318,3,12,6,0,318,319,5,
  	61,0,0,319,320,3,58,29,0,320,321,3,66,33,0,321,322,3,4,2,0,322,323,3,
  	18,9,0,323,324,5,62,0,0,324,325,3,18,9,0,325,61,1,0,0,0,326,327,3,12,
  	6,0,327,328,5,61,0,0,328,329,5,13,0,0,329,333,3,4,2,0,330,331,5,62,0,
  	0,331,332,5,40,0,0,332,334,5,79,0,0,333,330,1,0,0,0,333,334,1,0,0,0,334,
  	338,1,0,0,0,335,336,5,62,0,0,336,337,5,6,0,0,337,339,5,79,0,0,338,335,
  	1,0,0,0,338,339,1,0,0,0,339,63,1,0,0,0,340,341,7,3,0,0,341,65,1,0,0,0,
  	342,343,7,4,0,0,343,67,1,0,0,0,344,347,3,42,21,0,345,347,3,44,22,0,346,
  	344,1,0,0,0,346,345,1,0,0,0,347,69,1,0,0,0,348,349,3,12,6,0,349,350,5,
  	61,0,0,350,351,5,14,0,0,351,352,3,4,2,0,352,353,5,62,0,0,353,354,3,4,
  	2,0,354,355,5,71,0,0,355,360,3,14,7,0,356,357,5,62,0,0,357,358,3,0,0,
  	0,358,359,3,18,9,0,359,361,1,0,0,0,360,356,1,0,0,0,360,361,1,0,0,0,361,
  	71,1,0,0,0,35,76,81,88,94,96,102,106,120,124,127,131,135,140,142,152,
  	161,164,175,190,194,198,207,212,218,230,237,252,257,283,295,306,333,338,
  	346,360
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  llvmparserParserStaticData = staticData.release();
}

}

LLVMParser::LLVMParser(TokenStream *input) : LLVMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LLVMParser::LLVMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LLVMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *llvmparserParserStaticData->atn, llvmparserParserStaticData->decisionToDFA, llvmparserParserStaticData->sharedContextCache, options);
}

LLVMParser::~LLVMParser() {
  delete _interpreter;
}

const atn::ATN& LLVMParser::getATN() const {
  return *llvmparserParserStaticData->atn;
}

std::string LLVMParser::getGrammarFileName() const {
  return "LLVMParser.g4";
}

const std::vector<std::string>& LLVMParser::getRuleNames() const {
  return llvmparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& LLVMParser::getVocabulary() const {
  return llvmparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LLVMParser::getSerializedATN() const {
  return llvmparserParserStaticData->serializedATN;
}


//----------------- ScalarTypeContext ------------------------------------------------------------------

LLVMParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::I1() {
  return getToken(LLVMParser::I1, 0);
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::I32() {
  return getToken(LLVMParser::I32, 0);
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::I64() {
  return getToken(LLVMParser::I64, 0);
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::Float() {
  return getToken(LLVMParser::Float, 0);
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::Double() {
  return getToken(LLVMParser::Double, 0);
}

tree::TerminalNode* LLVMParser::ScalarTypeContext::Int() {
  return getToken(LLVMParser::Int, 0);
}


size_t LLVMParser::ScalarTypeContext::getRuleIndex() const {
  return LLVMParser::RuleScalarType;
}


std::any LLVMParser::ScalarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitScalarType(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ScalarTypeContext* LLVMParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 0, LLVMParser::RuleScalarType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34634616274944) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

LLVMParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::BasicTypeContext::Void() {
  return getToken(LLVMParser::Void, 0);
}

LLVMParser::ScalarTypeContext* LLVMParser::BasicTypeContext::scalarType() {
  return getRuleContext<LLVMParser::ScalarTypeContext>(0);
}


size_t LLVMParser::BasicTypeContext::getRuleIndex() const {
  return LLVMParser::RuleBasicType;
}


std::any LLVMParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::BasicTypeContext* LLVMParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 2, LLVMParser::RuleBasicType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::Void: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        match(LLVMParser::Void);
        break;
      }

      case LLVMParser::I1:
      case LLVMParser::I32:
      case LLVMParser::Int:
      case LLVMParser::I64:
      case LLVMParser::Float:
      case LLVMParser::Double: {
        enterOuterAlt(_localctx, 2);
        setState(75);
        scalarType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

LLVMParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::BasicTypeContext* LLVMParser::TypeContext::basicType() {
  return getRuleContext<LLVMParser::BasicTypeContext>(0);
}

LLVMParser::PointerTypeContext* LLVMParser::TypeContext::pointerType() {
  return getRuleContext<LLVMParser::PointerTypeContext>(0);
}

LLVMParser::ArrayTypeContext* LLVMParser::TypeContext::arrayType() {
  return getRuleContext<LLVMParser::ArrayTypeContext>(0);
}


size_t LLVMParser::TypeContext::getRuleIndex() const {
  return LLVMParser::RuleType;
}


std::any LLVMParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::TypeContext* LLVMParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, LLVMParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      basicType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      pointerType(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(80);
      arrayType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

LLVMParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::BasicTypeContext* LLVMParser::PointerTypeContext::basicType() {
  return getRuleContext<LLVMParser::BasicTypeContext>(0);
}

std::vector<tree::TerminalNode *> LLVMParser::PointerTypeContext::Asterisk() {
  return getTokens(LLVMParser::Asterisk);
}

tree::TerminalNode* LLVMParser::PointerTypeContext::Asterisk(size_t i) {
  return getToken(LLVMParser::Asterisk, i);
}

LLVMParser::ArrayTypeContext* LLVMParser::PointerTypeContext::arrayType() {
  return getRuleContext<LLVMParser::ArrayTypeContext>(0);
}

LLVMParser::PointerTypeContext* LLVMParser::PointerTypeContext::pointerType() {
  return getRuleContext<LLVMParser::PointerTypeContext>(0);
}


size_t LLVMParser::PointerTypeContext::getRuleIndex() const {
  return LLVMParser::RulePointerType;
}


std::any LLVMParser::PointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitPointerType(this);
  else
    return visitor->visitChildren(this);
}


LLVMParser::PointerTypeContext* LLVMParser::pointerType() {
   return pointerType(0);
}

LLVMParser::PointerTypeContext* LLVMParser::pointerType(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LLVMParser::PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, parentState);
  LLVMParser::PointerTypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, LLVMParser::RulePointerType, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::Void:
      case LLVMParser::I1:
      case LLVMParser::I32:
      case LLVMParser::Int:
      case LLVMParser::I64:
      case LLVMParser::Float:
      case LLVMParser::Double: {
        setState(84);
        basicType();
        setState(86); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(85);
                  match(LLVMParser::Asterisk);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(88); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case LLVMParser::LeftBracket: {
        setState(90);
        arrayType();
        setState(92); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(91);
                  match(LLVMParser::Asterisk);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(94); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PointerTypeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePointerType);
        setState(98);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(100); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(99);
                  match(LLVMParser::Asterisk);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(102); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER); 
      }
      setState(108);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

LLVMParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::ArrayTypeContext::LeftBracket() {
  return getToken(LLVMParser::LeftBracket, 0);
}

tree::TerminalNode* LLVMParser::ArrayTypeContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}

tree::TerminalNode* LLVMParser::ArrayTypeContext::Cross() {
  return getToken(LLVMParser::Cross, 0);
}

LLVMParser::TypeContext* LLVMParser::ArrayTypeContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

tree::TerminalNode* LLVMParser::ArrayTypeContext::RightBracket() {
  return getToken(LLVMParser::RightBracket, 0);
}


size_t LLVMParser::ArrayTypeContext::getRuleIndex() const {
  return LLVMParser::RuleArrayType;
}


std::any LLVMParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ArrayTypeContext* LLVMParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, LLVMParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(LLVMParser::LeftBracket);
    setState(110);
    match(LLVMParser::IntegerLiteral);
    setState(111);
    match(LLVMParser::Cross);
    setState(112);
    type();
    setState(113);
    match(LLVMParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalIdentifierContext ------------------------------------------------------------------

LLVMParser::GlobalIdentifierContext::GlobalIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::GlobalIdentifierContext::GlobalName() {
  return getToken(LLVMParser::GlobalName, 0);
}


size_t LLVMParser::GlobalIdentifierContext::getRuleIndex() const {
  return LLVMParser::RuleGlobalIdentifier;
}


std::any LLVMParser::GlobalIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitGlobalIdentifier(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::GlobalIdentifierContext* LLVMParser::globalIdentifier() {
  GlobalIdentifierContext *_localctx = _tracker.createInstance<GlobalIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 10, LLVMParser::RuleGlobalIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(LLVMParser::GlobalName);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalIdentifierContext ------------------------------------------------------------------

LLVMParser::LocalIdentifierContext::LocalIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::LocalIdentifierContext::LocalName() {
  return getToken(LLVMParser::LocalName, 0);
}

tree::TerminalNode* LLVMParser::LocalIdentifierContext::Percent() {
  return getToken(LLVMParser::Percent, 0);
}

tree::TerminalNode* LLVMParser::LocalIdentifierContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}


size_t LLVMParser::LocalIdentifierContext::getRuleIndex() const {
  return LLVMParser::RuleLocalIdentifier;
}


std::any LLVMParser::LocalIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitLocalIdentifier(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::LocalIdentifierContext* LLVMParser::localIdentifier() {
  LocalIdentifierContext *_localctx = _tracker.createInstance<LocalIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 12, LLVMParser::RuleLocalIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::LocalName: {
        enterOuterAlt(_localctx, 1);
        setState(117);
        match(LLVMParser::LocalName);
        break;
      }

      case LLVMParser::Percent: {
        enterOuterAlt(_localctx, 2);
        setState(118);
        match(LLVMParser::Percent);
        setState(119);
        match(LLVMParser::IntegerLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

LLVMParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::GlobalIdentifierContext* LLVMParser::VariableContext::globalIdentifier() {
  return getRuleContext<LLVMParser::GlobalIdentifierContext>(0);
}

LLVMParser::LocalIdentifierContext* LLVMParser::VariableContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}


size_t LLVMParser::VariableContext::getRuleIndex() const {
  return LLVMParser::RuleVariable;
}


std::any LLVMParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::VariableContext* LLVMParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 14, LLVMParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::GlobalName: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        globalIdentifier();
        break;
      }

      case LLVMParser::Percent:
      case LLVMParser::LocalName: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        localIdentifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

LLVMParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::LiteralContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}

tree::TerminalNode* LLVMParser::LiteralContext::Minus() {
  return getToken(LLVMParser::Minus, 0);
}

tree::TerminalNode* LLVMParser::LiteralContext::HexLiteral() {
  return getToken(LLVMParser::HexLiteral, 0);
}


size_t LLVMParser::LiteralContext::getRuleIndex() const {
  return LLVMParser::RuleLiteral;
}


std::any LLVMParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::LiteralContext* LLVMParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 16, LLVMParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::Minus:
      case LLVMParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(127);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LLVMParser::Minus) {
          setState(126);
          match(LLVMParser::Minus);
        }
        setState(129);
        match(LLVMParser::IntegerLiteral);
        break;
      }

      case LLVMParser::HexLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        match(LLVMParser::HexLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmediatelyUsableValueContext ------------------------------------------------------------------

LLVMParser::ImmediatelyUsableValueContext::ImmediatelyUsableValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::ImmediatelyUsableValueContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

LLVMParser::LiteralContext* LLVMParser::ImmediatelyUsableValueContext::literal() {
  return getRuleContext<LLVMParser::LiteralContext>(0);
}


size_t LLVMParser::ImmediatelyUsableValueContext::getRuleIndex() const {
  return LLVMParser::RuleImmediatelyUsableValue;
}


std::any LLVMParser::ImmediatelyUsableValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitImmediatelyUsableValue(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::immediatelyUsableValue() {
  ImmediatelyUsableValueContext *_localctx = _tracker.createInstance<ImmediatelyUsableValueContext>(_ctx, getState());
  enterRule(_localctx, 18, LLVMParser::RuleImmediatelyUsableValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::Percent:
      case LLVMParser::LocalName: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        localIdentifier();
        break;
      }

      case LLVMParser::Minus:
      case LLVMParser::IntegerLiteral:
      case LLVMParser::HexLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

LLVMParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LLVMParser::GlobalDeclarationContext *> LLVMParser::ModuleContext::globalDeclaration() {
  return getRuleContexts<LLVMParser::GlobalDeclarationContext>();
}

LLVMParser::GlobalDeclarationContext* LLVMParser::ModuleContext::globalDeclaration(size_t i) {
  return getRuleContext<LLVMParser::GlobalDeclarationContext>(i);
}

std::vector<LLVMParser::FunctionDeclarationContext *> LLVMParser::ModuleContext::functionDeclaration() {
  return getRuleContexts<LLVMParser::FunctionDeclarationContext>();
}

LLVMParser::FunctionDeclarationContext* LLVMParser::ModuleContext::functionDeclaration(size_t i) {
  return getRuleContext<LLVMParser::FunctionDeclarationContext>(i);
}

std::vector<LLVMParser::FunctionDefinitionContext *> LLVMParser::ModuleContext::functionDefinition() {
  return getRuleContexts<LLVMParser::FunctionDefinitionContext>();
}

LLVMParser::FunctionDefinitionContext* LLVMParser::ModuleContext::functionDefinition(size_t i) {
  return getRuleContext<LLVMParser::FunctionDefinitionContext>(i);
}


size_t LLVMParser::ModuleContext::getRuleIndex() const {
  return LLVMParser::RuleModule;
}


std::any LLVMParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ModuleContext* LLVMParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 20, LLVMParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LLVMParser::Define

    || _la == LLVMParser::Declare || _la == LLVMParser::GlobalName) {
      setState(140);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LLVMParser::GlobalName: {
          setState(137);
          globalDeclaration();
          break;
        }

        case LLVMParser::Declare: {
          setState(138);
          functionDeclaration();
          break;
        }

        case LLVMParser::Define: {
          setState(139);
          functionDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

LLVMParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::ScalarTypeContext* LLVMParser::InitializerContext::scalarType() {
  return getRuleContext<LLVMParser::ScalarTypeContext>(0);
}

tree::TerminalNode* LLVMParser::InitializerContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}

tree::TerminalNode* LLVMParser::InitializerContext::HexLiteral() {
  return getToken(LLVMParser::HexLiteral, 0);
}

LLVMParser::ConstantArrayContext* LLVMParser::InitializerContext::constantArray() {
  return getRuleContext<LLVMParser::ConstantArrayContext>(0);
}


size_t LLVMParser::InitializerContext::getRuleIndex() const {
  return LLVMParser::RuleInitializer;
}


std::any LLVMParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::InitializerContext* LLVMParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 22, LLVMParser::RuleInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(145);
      scalarType();
      setState(146);
      match(LLVMParser::IntegerLiteral);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      scalarType();
      setState(149);
      match(LLVMParser::HexLiteral);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(151);
      constantArray();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantArrayContext ------------------------------------------------------------------

LLVMParser::ConstantArrayContext::ConstantArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::ArrayTypeContext* LLVMParser::ConstantArrayContext::arrayType() {
  return getRuleContext<LLVMParser::ArrayTypeContext>(0);
}

tree::TerminalNode* LLVMParser::ConstantArrayContext::LeftBracket() {
  return getToken(LLVMParser::LeftBracket, 0);
}

tree::TerminalNode* LLVMParser::ConstantArrayContext::RightBracket() {
  return getToken(LLVMParser::RightBracket, 0);
}

std::vector<LLVMParser::InitializerContext *> LLVMParser::ConstantArrayContext::initializer() {
  return getRuleContexts<LLVMParser::InitializerContext>();
}

LLVMParser::InitializerContext* LLVMParser::ConstantArrayContext::initializer(size_t i) {
  return getRuleContext<LLVMParser::InitializerContext>(i);
}

std::vector<tree::TerminalNode *> LLVMParser::ConstantArrayContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::ConstantArrayContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}


size_t LLVMParser::ConstantArrayContext::getRuleIndex() const {
  return LLVMParser::RuleConstantArray;
}


std::any LLVMParser::ConstantArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitConstantArray(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ConstantArrayContext* LLVMParser::constantArray() {
  ConstantArrayContext *_localctx = _tracker.createInstance<ConstantArrayContext>(_ctx, getState());
  enterRule(_localctx, 24, LLVMParser::RuleConstantArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    arrayType();
    setState(155);
    match(LLVMParser::LeftBracket);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & 268435519) != 0)) {
      setState(156);
      initializer();
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LLVMParser::Comma) {
        setState(157);
        match(LLVMParser::Comma);
        setState(158);
        initializer();
        setState(163);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(166);
    match(LLVMParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalDeclarationContext ------------------------------------------------------------------

LLVMParser::GlobalDeclarationContext::GlobalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::GlobalIdentifierContext* LLVMParser::GlobalDeclarationContext::globalIdentifier() {
  return getRuleContext<LLVMParser::GlobalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

LLVMParser::InitializerContext* LLVMParser::GlobalDeclarationContext::initializer() {
  return getRuleContext<LLVMParser::InitializerContext>(0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::Global() {
  return getToken(LLVMParser::Global, 0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::ConstantStr() {
  return getToken(LLVMParser::ConstantStr, 0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::Comma() {
  return getToken(LLVMParser::Comma, 0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::Align() {
  return getToken(LLVMParser::Align, 0);
}

tree::TerminalNode* LLVMParser::GlobalDeclarationContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}


size_t LLVMParser::GlobalDeclarationContext::getRuleIndex() const {
  return LLVMParser::RuleGlobalDeclaration;
}


std::any LLVMParser::GlobalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitGlobalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::GlobalDeclarationContext* LLVMParser::globalDeclaration() {
  GlobalDeclarationContext *_localctx = _tracker.createInstance<GlobalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, LLVMParser::RuleGlobalDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    globalIdentifier();
    setState(169);
    match(LLVMParser::Equals);
    setState(170);
    _la = _input->LA(1);
    if (!(_la == LLVMParser::Global

    || _la == LLVMParser::ConstantStr)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(171);
    initializer();
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Comma) {
      setState(172);
      match(LLVMParser::Comma);
      setState(173);
      match(LLVMParser::Align);
      setState(174);
      match(LLVMParser::IntegerLiteral);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

LLVMParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::FunctionDeclarationContext::Declare() {
  return getToken(LLVMParser::Declare, 0);
}

LLVMParser::TypeContext* LLVMParser::FunctionDeclarationContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

LLVMParser::GlobalIdentifierContext* LLVMParser::FunctionDeclarationContext::globalIdentifier() {
  return getRuleContext<LLVMParser::GlobalIdentifierContext>(0);
}

LLVMParser::FunctionArgumentsContext* LLVMParser::FunctionDeclarationContext::functionArguments() {
  return getRuleContext<LLVMParser::FunctionArgumentsContext>(0);
}


size_t LLVMParser::FunctionDeclarationContext::getRuleIndex() const {
  return LLVMParser::RuleFunctionDeclaration;
}


std::any LLVMParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::FunctionDeclarationContext* LLVMParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, LLVMParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(LLVMParser::Declare);
    setState(178);
    type();
    setState(179);
    globalIdentifier();
    setState(180);
    functionArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

LLVMParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::FunctionDefinitionContext::Define() {
  return getToken(LLVMParser::Define, 0);
}

LLVMParser::TypeContext* LLVMParser::FunctionDefinitionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

LLVMParser::GlobalIdentifierContext* LLVMParser::FunctionDefinitionContext::globalIdentifier() {
  return getRuleContext<LLVMParser::GlobalIdentifierContext>(0);
}

LLVMParser::FunctionArgumentsContext* LLVMParser::FunctionDefinitionContext::functionArguments() {
  return getRuleContext<LLVMParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* LLVMParser::FunctionDefinitionContext::LeftBrace() {
  return getToken(LLVMParser::LeftBrace, 0);
}

tree::TerminalNode* LLVMParser::FunctionDefinitionContext::RightBrace() {
  return getToken(LLVMParser::RightBrace, 0);
}

std::vector<LLVMParser::BasicBlockContext *> LLVMParser::FunctionDefinitionContext::basicBlock() {
  return getRuleContexts<LLVMParser::BasicBlockContext>();
}

LLVMParser::BasicBlockContext* LLVMParser::FunctionDefinitionContext::basicBlock(size_t i) {
  return getRuleContext<LLVMParser::BasicBlockContext>(i);
}


size_t LLVMParser::FunctionDefinitionContext::getRuleIndex() const {
  return LLVMParser::RuleFunctionDefinition;
}


std::any LLVMParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::FunctionDefinitionContext* LLVMParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, LLVMParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(LLVMParser::Define);
    setState(183);
    type();
    setState(184);
    globalIdentifier();
    setState(185);
    functionArguments();
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::LeftBrace) {
      setState(186);
      match(LLVMParser::LeftBrace);
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LLVMParser::LabelName) {
        setState(187);
        basicBlock();
        setState(192);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(193);
      match(LLVMParser::RightBrace);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentsContext ------------------------------------------------------------------

LLVMParser::FunctionArgumentsContext::FunctionArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::FunctionArgumentsContext::LeftParen() {
  return getToken(LLVMParser::LeftParen, 0);
}

tree::TerminalNode* LLVMParser::FunctionArgumentsContext::RightParen() {
  return getToken(LLVMParser::RightParen, 0);
}

LLVMParser::ParameterListContext* LLVMParser::FunctionArgumentsContext::parameterList() {
  return getRuleContext<LLVMParser::ParameterListContext>(0);
}


size_t LLVMParser::FunctionArgumentsContext::getRuleIndex() const {
  return LLVMParser::RuleFunctionArguments;
}


std::any LLVMParser::FunctionArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArguments(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::FunctionArgumentsContext* LLVMParser::functionArguments() {
  FunctionArgumentsContext *_localctx = _tracker.createInstance<FunctionArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 32, LLVMParser::RuleFunctionArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(LLVMParser::LeftParen);
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 37) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 37)) & 1073742077) != 0)) {
      setState(197);
      parameterList();
    }
    setState(200);
    match(LLVMParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

LLVMParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LLVMParser::ParameterContext *> LLVMParser::ParameterListContext::parameter() {
  return getRuleContexts<LLVMParser::ParameterContext>();
}

LLVMParser::ParameterContext* LLVMParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<LLVMParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> LLVMParser::ParameterListContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::ParameterListContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}


size_t LLVMParser::ParameterListContext::getRuleIndex() const {
  return LLVMParser::RuleParameterList;
}


std::any LLVMParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ParameterListContext* LLVMParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 34, LLVMParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    parameter();
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LLVMParser::Comma) {
      setState(203);
      match(LLVMParser::Comma);
      setState(204);
      parameter();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

LLVMParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::TypeContext* LLVMParser::ParameterContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

LLVMParser::LocalIdentifierContext* LLVMParser::ParameterContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}


size_t LLVMParser::ParameterContext::getRuleIndex() const {
  return LLVMParser::RuleParameter;
}


std::any LLVMParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ParameterContext* LLVMParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 36, LLVMParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    type();
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Percent

    || _la == LLVMParser::LocalName) {
      setState(211);
      localIdentifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicBlockContext ------------------------------------------------------------------

LLVMParser::BasicBlockContext::BasicBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::BasicBlockContext::LabelName() {
  return getToken(LLVMParser::LabelName, 0);
}

std::vector<LLVMParser::InstructionContext *> LLVMParser::BasicBlockContext::instruction() {
  return getRuleContexts<LLVMParser::InstructionContext>();
}

LLVMParser::InstructionContext* LLVMParser::BasicBlockContext::instruction(size_t i) {
  return getRuleContext<LLVMParser::InstructionContext>(i);
}


size_t LLVMParser::BasicBlockContext::getRuleIndex() const {
  return LLVMParser::RuleBasicBlock;
}


std::any LLVMParser::BasicBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitBasicBlock(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::BasicBlockContext* LLVMParser::basicBlock() {
  BasicBlockContext *_localctx = _tracker.createInstance<BasicBlockContext>(_ctx, getState());
  enterRule(_localctx, 38, LLVMParser::RuleBasicBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(LLVMParser::LabelName);
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5888) != 0) || _la == LLVMParser::Percent

    || _la == LLVMParser::LocalName) {
      setState(215);
      instruction();
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

LLVMParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::CallInstructionContext* LLVMParser::InstructionContext::callInstruction() {
  return getRuleContext<LLVMParser::CallInstructionContext>(0);
}

LLVMParser::ArithmeticInstructionContext* LLVMParser::InstructionContext::arithmeticInstruction() {
  return getRuleContext<LLVMParser::ArithmeticInstructionContext>(0);
}

LLVMParser::LoadInstructionContext* LLVMParser::InstructionContext::loadInstruction() {
  return getRuleContext<LLVMParser::LoadInstructionContext>(0);
}

LLVMParser::StoreInstructionContext* LLVMParser::InstructionContext::storeInstruction() {
  return getRuleContext<LLVMParser::StoreInstructionContext>(0);
}

LLVMParser::PhiInstructionContext* LLVMParser::InstructionContext::phiInstruction() {
  return getRuleContext<LLVMParser::PhiInstructionContext>(0);
}

LLVMParser::ComparisonInstructionContext* LLVMParser::InstructionContext::comparisonInstruction() {
  return getRuleContext<LLVMParser::ComparisonInstructionContext>(0);
}

LLVMParser::AllocaInstructionContext* LLVMParser::InstructionContext::allocaInstruction() {
  return getRuleContext<LLVMParser::AllocaInstructionContext>(0);
}

LLVMParser::TerminatorInstructionContext* LLVMParser::InstructionContext::terminatorInstruction() {
  return getRuleContext<LLVMParser::TerminatorInstructionContext>(0);
}

LLVMParser::GepInstructionContext* LLVMParser::InstructionContext::gepInstruction() {
  return getRuleContext<LLVMParser::GepInstructionContext>(0);
}


size_t LLVMParser::InstructionContext::getRuleIndex() const {
  return LLVMParser::RuleInstruction;
}


std::any LLVMParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::InstructionContext* LLVMParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 40, LLVMParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(221);
      callInstruction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(222);
      arithmeticInstruction();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(223);
      loadInstruction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(224);
      storeInstruction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(225);
      phiInstruction();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(226);
      comparisonInstruction();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(227);
      allocaInstruction();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(228);
      terminatorInstruction();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(229);
      gepInstruction();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnInstructionContext ------------------------------------------------------------------

LLVMParser::ReturnInstructionContext::ReturnInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::ReturnInstructionContext::Ret() {
  return getToken(LLVMParser::Ret, 0);
}

tree::TerminalNode* LLVMParser::ReturnInstructionContext::Void() {
  return getToken(LLVMParser::Void, 0);
}

LLVMParser::TypeContext* LLVMParser::ReturnInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::ReturnInstructionContext::immediatelyUsableValue() {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(0);
}


size_t LLVMParser::ReturnInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleReturnInstruction;
}


std::any LLVMParser::ReturnInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitReturnInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ReturnInstructionContext* LLVMParser::returnInstruction() {
  ReturnInstructionContext *_localctx = _tracker.createInstance<ReturnInstructionContext>(_ctx, getState());
  enterRule(_localctx, 42, LLVMParser::RuleReturnInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(LLVMParser::Ret);
    setState(237);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(233);
      match(LLVMParser::Void);
      break;
    }

    case 2: {
      setState(234);
      type();
      setState(235);
      immediatelyUsableValue();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchInstructionContext ------------------------------------------------------------------

LLVMParser::BranchInstructionContext::BranchInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::BranchInstructionContext::Br() {
  return getToken(LLVMParser::Br, 0);
}

tree::TerminalNode* LLVMParser::BranchInstructionContext::I1() {
  return getToken(LLVMParser::I1, 0);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::BranchInstructionContext::immediatelyUsableValue() {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(0);
}

std::vector<tree::TerminalNode *> LLVMParser::BranchInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::BranchInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}

std::vector<tree::TerminalNode *> LLVMParser::BranchInstructionContext::Label() {
  return getTokens(LLVMParser::Label);
}

tree::TerminalNode* LLVMParser::BranchInstructionContext::Label(size_t i) {
  return getToken(LLVMParser::Label, i);
}

std::vector<LLVMParser::LocalIdentifierContext *> LLVMParser::BranchInstructionContext::localIdentifier() {
  return getRuleContexts<LLVMParser::LocalIdentifierContext>();
}

LLVMParser::LocalIdentifierContext* LLVMParser::BranchInstructionContext::localIdentifier(size_t i) {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(i);
}


size_t LLVMParser::BranchInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleBranchInstruction;
}


std::any LLVMParser::BranchInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitBranchInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::BranchInstructionContext* LLVMParser::branchInstruction() {
  BranchInstructionContext *_localctx = _tracker.createInstance<BranchInstructionContext>(_ctx, getState());
  enterRule(_localctx, 44, LLVMParser::RuleBranchInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(239);
      match(LLVMParser::Br);
      setState(240);
      match(LLVMParser::I1);
      setState(241);
      immediatelyUsableValue();
      setState(242);
      match(LLVMParser::Comma);
      setState(243);
      match(LLVMParser::Label);
      setState(244);
      localIdentifier();
      setState(245);
      match(LLVMParser::Comma);
      setState(246);
      match(LLVMParser::Label);
      setState(247);
      localIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      match(LLVMParser::Br);
      setState(250);
      match(LLVMParser::Label);
      setState(251);
      localIdentifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallInstructionContext ------------------------------------------------------------------

LLVMParser::CallInstructionContext::CallInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::CallInstructionContext::Call() {
  return getToken(LLVMParser::Call, 0);
}

LLVMParser::TypeContext* LLVMParser::CallInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

LLVMParser::GlobalIdentifierContext* LLVMParser::CallInstructionContext::globalIdentifier() {
  return getRuleContext<LLVMParser::GlobalIdentifierContext>(0);
}

LLVMParser::FunctionArgumentsContext* LLVMParser::CallInstructionContext::functionArguments() {
  return getRuleContext<LLVMParser::FunctionArgumentsContext>(0);
}

LLVMParser::LocalIdentifierContext* LLVMParser::CallInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::CallInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}


size_t LLVMParser::CallInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleCallInstruction;
}


std::any LLVMParser::CallInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitCallInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::CallInstructionContext* LLVMParser::callInstruction() {
  CallInstructionContext *_localctx = _tracker.createInstance<CallInstructionContext>(_ctx, getState());
  enterRule(_localctx, 46, LLVMParser::RuleCallInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Percent

    || _la == LLVMParser::LocalName) {
      setState(254);
      localIdentifier();
      setState(255);
      match(LLVMParser::Equals);
    }
    setState(259);
    match(LLVMParser::Call);
    setState(260);
    type();
    setState(261);
    globalIdentifier();
    setState(262);
    functionArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticInstructionContext ------------------------------------------------------------------

LLVMParser::ArithmeticInstructionContext::ArithmeticInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::ArithmeticInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::ArithmeticInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

LLVMParser::BinaryOperationContext* LLVMParser::ArithmeticInstructionContext::binaryOperation() {
  return getRuleContext<LLVMParser::BinaryOperationContext>(0);
}

LLVMParser::TypeContext* LLVMParser::ArithmeticInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

std::vector<LLVMParser::ImmediatelyUsableValueContext *> LLVMParser::ArithmeticInstructionContext::immediatelyUsableValue() {
  return getRuleContexts<LLVMParser::ImmediatelyUsableValueContext>();
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::ArithmeticInstructionContext::immediatelyUsableValue(size_t i) {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(i);
}

tree::TerminalNode* LLVMParser::ArithmeticInstructionContext::Comma() {
  return getToken(LLVMParser::Comma, 0);
}


size_t LLVMParser::ArithmeticInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleArithmeticInstruction;
}


std::any LLVMParser::ArithmeticInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ArithmeticInstructionContext* LLVMParser::arithmeticInstruction() {
  ArithmeticInstructionContext *_localctx = _tracker.createInstance<ArithmeticInstructionContext>(_ctx, getState());
  enterRule(_localctx, 48, LLVMParser::RuleArithmeticInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    localIdentifier();
    setState(265);
    match(LLVMParser::Equals);
    setState(266);
    binaryOperation();
    setState(267);
    type();
    setState(268);
    immediatelyUsableValue();
    setState(269);
    match(LLVMParser::Comma);
    setState(270);
    immediatelyUsableValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadInstructionContext ------------------------------------------------------------------

LLVMParser::LoadInstructionContext::LoadInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::LoadInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::Load() {
  return getToken(LLVMParser::Load, 0);
}

std::vector<LLVMParser::TypeContext *> LLVMParser::LoadInstructionContext::type() {
  return getRuleContexts<LLVMParser::TypeContext>();
}

LLVMParser::TypeContext* LLVMParser::LoadInstructionContext::type(size_t i) {
  return getRuleContext<LLVMParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> LLVMParser::LoadInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::Asterisk() {
  return getToken(LLVMParser::Asterisk, 0);
}

LLVMParser::VariableContext* LLVMParser::LoadInstructionContext::variable() {
  return getRuleContext<LLVMParser::VariableContext>(0);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::Align() {
  return getToken(LLVMParser::Align, 0);
}

tree::TerminalNode* LLVMParser::LoadInstructionContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}


size_t LLVMParser::LoadInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleLoadInstruction;
}


std::any LLVMParser::LoadInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitLoadInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::LoadInstructionContext* LLVMParser::loadInstruction() {
  LoadInstructionContext *_localctx = _tracker.createInstance<LoadInstructionContext>(_ctx, getState());
  enterRule(_localctx, 50, LLVMParser::RuleLoadInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    localIdentifier();
    setState(273);
    match(LLVMParser::Equals);
    setState(274);
    match(LLVMParser::Load);
    setState(275);
    type();
    setState(276);
    match(LLVMParser::Comma);
    setState(277);
    type();
    setState(278);
    match(LLVMParser::Asterisk);
    setState(279);
    variable();
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Comma) {
      setState(280);
      match(LLVMParser::Comma);
      setState(281);
      match(LLVMParser::Align);
      setState(282);
      match(LLVMParser::IntegerLiteral);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StoreInstructionContext ------------------------------------------------------------------

LLVMParser::StoreInstructionContext::StoreInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::StoreInstructionContext::Store() {
  return getToken(LLVMParser::Store, 0);
}

std::vector<LLVMParser::TypeContext *> LLVMParser::StoreInstructionContext::type() {
  return getRuleContexts<LLVMParser::TypeContext>();
}

LLVMParser::TypeContext* LLVMParser::StoreInstructionContext::type(size_t i) {
  return getRuleContext<LLVMParser::TypeContext>(i);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::StoreInstructionContext::immediatelyUsableValue() {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(0);
}

std::vector<tree::TerminalNode *> LLVMParser::StoreInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::StoreInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}

tree::TerminalNode* LLVMParser::StoreInstructionContext::Asterisk() {
  return getToken(LLVMParser::Asterisk, 0);
}

LLVMParser::VariableContext* LLVMParser::StoreInstructionContext::variable() {
  return getRuleContext<LLVMParser::VariableContext>(0);
}

tree::TerminalNode* LLVMParser::StoreInstructionContext::Align() {
  return getToken(LLVMParser::Align, 0);
}

tree::TerminalNode* LLVMParser::StoreInstructionContext::IntegerLiteral() {
  return getToken(LLVMParser::IntegerLiteral, 0);
}


size_t LLVMParser::StoreInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleStoreInstruction;
}


std::any LLVMParser::StoreInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitStoreInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::StoreInstructionContext* LLVMParser::storeInstruction() {
  StoreInstructionContext *_localctx = _tracker.createInstance<StoreInstructionContext>(_ctx, getState());
  enterRule(_localctx, 52, LLVMParser::RuleStoreInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(LLVMParser::Store);
    setState(286);
    type();
    setState(287);
    immediatelyUsableValue();
    setState(288);
    match(LLVMParser::Comma);
    setState(289);
    type();
    setState(290);
    match(LLVMParser::Asterisk);
    setState(291);
    variable();
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Comma) {
      setState(292);
      match(LLVMParser::Comma);
      setState(293);
      match(LLVMParser::Align);
      setState(294);
      match(LLVMParser::IntegerLiteral);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhiInstructionContext ------------------------------------------------------------------

LLVMParser::PhiInstructionContext::PhiInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::PhiInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::PhiInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

tree::TerminalNode* LLVMParser::PhiInstructionContext::Phi() {
  return getToken(LLVMParser::Phi, 0);
}

LLVMParser::TypeContext* LLVMParser::PhiInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

std::vector<LLVMParser::PhiValueContext *> LLVMParser::PhiInstructionContext::phiValue() {
  return getRuleContexts<LLVMParser::PhiValueContext>();
}

LLVMParser::PhiValueContext* LLVMParser::PhiInstructionContext::phiValue(size_t i) {
  return getRuleContext<LLVMParser::PhiValueContext>(i);
}

std::vector<tree::TerminalNode *> LLVMParser::PhiInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::PhiInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}


size_t LLVMParser::PhiInstructionContext::getRuleIndex() const {
  return LLVMParser::RulePhiInstruction;
}


std::any LLVMParser::PhiInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitPhiInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::PhiInstructionContext* LLVMParser::phiInstruction() {
  PhiInstructionContext *_localctx = _tracker.createInstance<PhiInstructionContext>(_ctx, getState());
  enterRule(_localctx, 54, LLVMParser::RulePhiInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    localIdentifier();
    setState(298);
    match(LLVMParser::Equals);
    setState(299);
    match(LLVMParser::Phi);
    setState(300);
    type();
    setState(301);
    phiValue();
    setState(306);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LLVMParser::Comma) {
      setState(302);
      match(LLVMParser::Comma);
      setState(303);
      phiValue();
      setState(308);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhiValueContext ------------------------------------------------------------------

LLVMParser::PhiValueContext::PhiValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::PhiValueContext::LeftBrace() {
  return getToken(LLVMParser::LeftBrace, 0);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::PhiValueContext::immediatelyUsableValue() {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(0);
}

tree::TerminalNode* LLVMParser::PhiValueContext::Comma() {
  return getToken(LLVMParser::Comma, 0);
}

LLVMParser::LocalIdentifierContext* LLVMParser::PhiValueContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::PhiValueContext::RightBrace() {
  return getToken(LLVMParser::RightBrace, 0);
}


size_t LLVMParser::PhiValueContext::getRuleIndex() const {
  return LLVMParser::RulePhiValue;
}


std::any LLVMParser::PhiValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitPhiValue(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::PhiValueContext* LLVMParser::phiValue() {
  PhiValueContext *_localctx = _tracker.createInstance<PhiValueContext>(_ctx, getState());
  enterRule(_localctx, 56, LLVMParser::RulePhiValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(LLVMParser::LeftBrace);
    setState(310);
    immediatelyUsableValue();
    setState(311);
    match(LLVMParser::Comma);
    setState(312);
    localIdentifier();
    setState(313);
    match(LLVMParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperationContext ------------------------------------------------------------------

LLVMParser::ComparisonOperationContext::ComparisonOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::ComparisonOperationContext::Icmp() {
  return getToken(LLVMParser::Icmp, 0);
}

tree::TerminalNode* LLVMParser::ComparisonOperationContext::Fcmp() {
  return getToken(LLVMParser::Fcmp, 0);
}


size_t LLVMParser::ComparisonOperationContext::getRuleIndex() const {
  return LLVMParser::RuleComparisonOperation;
}


std::any LLVMParser::ComparisonOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperation(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ComparisonOperationContext* LLVMParser::comparisonOperation() {
  ComparisonOperationContext *_localctx = _tracker.createInstance<ComparisonOperationContext>(_ctx, getState());
  enterRule(_localctx, 58, LLVMParser::RuleComparisonOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _la = _input->LA(1);
    if (!(_la == LLVMParser::Icmp

    || _la == LLVMParser::Fcmp)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonInstructionContext ------------------------------------------------------------------

LLVMParser::ComparisonInstructionContext::ComparisonInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::ComparisonInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::ComparisonInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

LLVMParser::ComparisonOperationContext* LLVMParser::ComparisonInstructionContext::comparisonOperation() {
  return getRuleContext<LLVMParser::ComparisonOperationContext>(0);
}

LLVMParser::ComparisonPredicateContext* LLVMParser::ComparisonInstructionContext::comparisonPredicate() {
  return getRuleContext<LLVMParser::ComparisonPredicateContext>(0);
}

LLVMParser::TypeContext* LLVMParser::ComparisonInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

std::vector<LLVMParser::ImmediatelyUsableValueContext *> LLVMParser::ComparisonInstructionContext::immediatelyUsableValue() {
  return getRuleContexts<LLVMParser::ImmediatelyUsableValueContext>();
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::ComparisonInstructionContext::immediatelyUsableValue(size_t i) {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(i);
}

tree::TerminalNode* LLVMParser::ComparisonInstructionContext::Comma() {
  return getToken(LLVMParser::Comma, 0);
}


size_t LLVMParser::ComparisonInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleComparisonInstruction;
}


std::any LLVMParser::ComparisonInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitComparisonInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ComparisonInstructionContext* LLVMParser::comparisonInstruction() {
  ComparisonInstructionContext *_localctx = _tracker.createInstance<ComparisonInstructionContext>(_ctx, getState());
  enterRule(_localctx, 60, LLVMParser::RuleComparisonInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    localIdentifier();
    setState(318);
    match(LLVMParser::Equals);
    setState(319);
    comparisonOperation();
    setState(320);
    comparisonPredicate();
    setState(321);
    type();
    setState(322);
    immediatelyUsableValue();
    setState(323);
    match(LLVMParser::Comma);
    setState(324);
    immediatelyUsableValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllocaInstructionContext ------------------------------------------------------------------

LLVMParser::AllocaInstructionContext::AllocaInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::AllocaInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::Alloca() {
  return getToken(LLVMParser::Alloca, 0);
}

LLVMParser::TypeContext* LLVMParser::AllocaInstructionContext::type() {
  return getRuleContext<LLVMParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> LLVMParser::AllocaInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::I32() {
  return getToken(LLVMParser::I32, 0);
}

std::vector<tree::TerminalNode *> LLVMParser::AllocaInstructionContext::IntegerLiteral() {
  return getTokens(LLVMParser::IntegerLiteral);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::IntegerLiteral(size_t i) {
  return getToken(LLVMParser::IntegerLiteral, i);
}

tree::TerminalNode* LLVMParser::AllocaInstructionContext::Align() {
  return getToken(LLVMParser::Align, 0);
}


size_t LLVMParser::AllocaInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleAllocaInstruction;
}


std::any LLVMParser::AllocaInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitAllocaInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::AllocaInstructionContext* LLVMParser::allocaInstruction() {
  AllocaInstructionContext *_localctx = _tracker.createInstance<AllocaInstructionContext>(_ctx, getState());
  enterRule(_localctx, 62, LLVMParser::RuleAllocaInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    localIdentifier();
    setState(327);
    match(LLVMParser::Equals);
    setState(328);
    match(LLVMParser::Alloca);
    setState(329);
    type();
    setState(333);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(330);
      match(LLVMParser::Comma);
      setState(331);
      match(LLVMParser::I32);
      setState(332);
      match(LLVMParser::IntegerLiteral);
      break;
    }

    default:
      break;
    }
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Comma) {
      setState(335);
      match(LLVMParser::Comma);
      setState(336);
      match(LLVMParser::Align);
      setState(337);
      match(LLVMParser::IntegerLiteral);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperationContext ------------------------------------------------------------------

LLVMParser::BinaryOperationContext::BinaryOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::Add() {
  return getToken(LLVMParser::Add, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::Sub() {
  return getToken(LLVMParser::Sub, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::Mul() {
  return getToken(LLVMParser::Mul, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::Div() {
  return getToken(LLVMParser::Div, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::Srem() {
  return getToken(LLVMParser::Srem, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::FAdd() {
  return getToken(LLVMParser::FAdd, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::FSub() {
  return getToken(LLVMParser::FSub, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::FMul() {
  return getToken(LLVMParser::FMul, 0);
}

tree::TerminalNode* LLVMParser::BinaryOperationContext::FDiv() {
  return getToken(LLVMParser::FDiv, 0);
}


size_t LLVMParser::BinaryOperationContext::getRuleIndex() const {
  return LLVMParser::RuleBinaryOperation;
}


std::any LLVMParser::BinaryOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOperation(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::BinaryOperationContext* LLVMParser::binaryOperation() {
  BinaryOperationContext *_localctx = _tracker.createInstance<BinaryOperationContext>(_ctx, getState());
  enterRule(_localctx, 64, LLVMParser::RuleBinaryOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 50266112) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonPredicateContext ------------------------------------------------------------------

LLVMParser::ComparisonPredicateContext::ComparisonPredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Eq() {
  return getToken(LLVMParser::Eq, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ne() {
  return getToken(LLVMParser::Ne, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ugt() {
  return getToken(LLVMParser::Ugt, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Uge() {
  return getToken(LLVMParser::Uge, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ult() {
  return getToken(LLVMParser::Ult, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ule() {
  return getToken(LLVMParser::Ule, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Sgt() {
  return getToken(LLVMParser::Sgt, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Sge() {
  return getToken(LLVMParser::Sge, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Slt() {
  return getToken(LLVMParser::Slt, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Sle() {
  return getToken(LLVMParser::Sle, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Oeq() {
  return getToken(LLVMParser::Oeq, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::One() {
  return getToken(LLVMParser::One, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ogt() {
  return getToken(LLVMParser::Ogt, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Oge() {
  return getToken(LLVMParser::Oge, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Olt() {
  return getToken(LLVMParser::Olt, 0);
}

tree::TerminalNode* LLVMParser::ComparisonPredicateContext::Ole() {
  return getToken(LLVMParser::Ole, 0);
}


size_t LLVMParser::ComparisonPredicateContext::getRuleIndex() const {
  return LLVMParser::RuleComparisonPredicate;
}


std::any LLVMParser::ComparisonPredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitComparisonPredicate(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::ComparisonPredicateContext* LLVMParser::comparisonPredicate() {
  ComparisonPredicateContext *_localctx = _tracker.createInstance<ComparisonPredicateContext>(_ctx, getState());
  enterRule(_localctx, 66, LLVMParser::RuleComparisonPredicate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2305807824841605120) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminatorInstructionContext ------------------------------------------------------------------

LLVMParser::TerminatorInstructionContext::TerminatorInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::ReturnInstructionContext* LLVMParser::TerminatorInstructionContext::returnInstruction() {
  return getRuleContext<LLVMParser::ReturnInstructionContext>(0);
}

LLVMParser::BranchInstructionContext* LLVMParser::TerminatorInstructionContext::branchInstruction() {
  return getRuleContext<LLVMParser::BranchInstructionContext>(0);
}


size_t LLVMParser::TerminatorInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleTerminatorInstruction;
}


std::any LLVMParser::TerminatorInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitTerminatorInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::TerminatorInstructionContext* LLVMParser::terminatorInstruction() {
  TerminatorInstructionContext *_localctx = _tracker.createInstance<TerminatorInstructionContext>(_ctx, getState());
  enterRule(_localctx, 68, LLVMParser::RuleTerminatorInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LLVMParser::Ret: {
        enterOuterAlt(_localctx, 1);
        setState(344);
        returnInstruction();
        break;
      }

      case LLVMParser::Br: {
        enterOuterAlt(_localctx, 2);
        setState(345);
        branchInstruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GepInstructionContext ------------------------------------------------------------------

LLVMParser::GepInstructionContext::GepInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LLVMParser::LocalIdentifierContext* LLVMParser::GepInstructionContext::localIdentifier() {
  return getRuleContext<LLVMParser::LocalIdentifierContext>(0);
}

tree::TerminalNode* LLVMParser::GepInstructionContext::Equals() {
  return getToken(LLVMParser::Equals, 0);
}

tree::TerminalNode* LLVMParser::GepInstructionContext::GetElementPtr() {
  return getToken(LLVMParser::GetElementPtr, 0);
}

std::vector<LLVMParser::TypeContext *> LLVMParser::GepInstructionContext::type() {
  return getRuleContexts<LLVMParser::TypeContext>();
}

LLVMParser::TypeContext* LLVMParser::GepInstructionContext::type(size_t i) {
  return getRuleContext<LLVMParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> LLVMParser::GepInstructionContext::Comma() {
  return getTokens(LLVMParser::Comma);
}

tree::TerminalNode* LLVMParser::GepInstructionContext::Comma(size_t i) {
  return getToken(LLVMParser::Comma, i);
}

tree::TerminalNode* LLVMParser::GepInstructionContext::Asterisk() {
  return getToken(LLVMParser::Asterisk, 0);
}

LLVMParser::VariableContext* LLVMParser::GepInstructionContext::variable() {
  return getRuleContext<LLVMParser::VariableContext>(0);
}

LLVMParser::ScalarTypeContext* LLVMParser::GepInstructionContext::scalarType() {
  return getRuleContext<LLVMParser::ScalarTypeContext>(0);
}

LLVMParser::ImmediatelyUsableValueContext* LLVMParser::GepInstructionContext::immediatelyUsableValue() {
  return getRuleContext<LLVMParser::ImmediatelyUsableValueContext>(0);
}


size_t LLVMParser::GepInstructionContext::getRuleIndex() const {
  return LLVMParser::RuleGepInstruction;
}


std::any LLVMParser::GepInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LLVMParserVisitor*>(visitor))
    return parserVisitor->visitGepInstruction(this);
  else
    return visitor->visitChildren(this);
}

LLVMParser::GepInstructionContext* LLVMParser::gepInstruction() {
  GepInstructionContext *_localctx = _tracker.createInstance<GepInstructionContext>(_ctx, getState());
  enterRule(_localctx, 70, LLVMParser::RuleGepInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    localIdentifier();
    setState(349);
    match(LLVMParser::Equals);
    setState(350);
    match(LLVMParser::GetElementPtr);
    setState(351);
    type();
    setState(352);
    match(LLVMParser::Comma);
    setState(353);
    type();
    setState(354);
    match(LLVMParser::Asterisk);
    setState(355);
    variable();
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LLVMParser::Comma) {
      setState(356);
      match(LLVMParser::Comma);
      setState(357);
      scalarType();
      setState(358);
      immediatelyUsableValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LLVMParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return pointerTypeSempred(antlrcpp::downCast<PointerTypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LLVMParser::pointerTypeSempred(PointerTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void LLVMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  llvmparserParserInitialize();
#else
  ::antlr4::internal::call_once(llvmparserParserOnceFlag, llvmparserParserInitialize);
#endif
}
