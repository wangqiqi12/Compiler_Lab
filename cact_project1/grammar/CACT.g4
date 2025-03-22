grammar CACT;

@header {
    #include <vector>
}

/****** parser ******/
compUnit
    : (decl|funcDef)+ EOF
    ;

decl
    : constDecl
    | varDecl
    ;

constDecl
    : CONST bType constDef (',' constDef)* ';'
    ;

bType
    : INT
    | BOOL
    | FLOAT
    | DOUBLE
    ;

constDef
    : Ident ('[' IntConst ']')* '=' constInitVal
    ;

constInitVal
    : constEXP 
    | '{' (constInitVal (',' constInitVal)* )? '}'
    ;

varDecl
    : bType varDef (',' varDef)* ';'
    ;

varDef
    : Ident ('[' IntConst ']')* ('=' constInitVal)?
    ;

funcDef
    : funcType Ident '(' (funcFParams)? ')' block
    ;

funcType
    : VOID
    | INT
    | FLOAT
    | DOUBLE
    | BOOL
    ;

funcFParams
    : funcFParam  (',' funcFParam)*
    ;

funcFParam
    : bType Ident ('[' IntConst? ']' ('[' IntConst ']')* )?
    ;

block
    : '{' (blockItem)* '}'
    ;

blockItem
    : decl
    | stmt
    ;

stmt
    : lVal '=' exp ';'
    | (exp)? ';'
    | block
    | RETURN exp? ';'
    | IF '(' cond ')' stmt (ELSE stmt)?
    | WHILE '(' cond ')' stmt
    | BREAK ';'
    | CONTINUE ';'
    ;

exp
    : boolConst
    | addExp
    ;

constEXP
    : number
    | boolConst
    ;

cond
    : lOrExp
    ;

lVal
    : Ident ('['exp']')*
    ;

primaryExp
    : '('exp')'
    | lVal
    | number
    ;

number
    : IntConst
    | DoubleConst
    | FloatConst
    ;

unaryExp
    : primaryExp
    | (ADD|SUB|NOT) unaryExp
    | Ident '(' (funcRParams)?' )'
    ;

funcRParams
    : exp (',' exp)*
    ;

mulExp
    : unaryExp
    | mulExp (MUL|DIV|MOD) unaryExp
    | Ident '(' (funcRParams)? ')'
    ;

boolConst
    : TRUE
    | FALSE
    ;


//TODO
addExp
    : mulExp
    | addExp (ADD|SUB) mulExp
    ;

relExp
    : addExp
    | relExp (GT|LT|GE|LE) addExp
    | boolConst
    ;

eqExp
    : relExp
    | eqExp (EQ|NEQ) relExp
    ;

lAndExp
    : eqExp
    | lAndExp AND eqExp
    ;

lOrExp
    : lAndExp
    | lOrExp OR lAndExp
    ;


/****** lexer  ******/
INT: 'int';
BOOL: 'bool';
DOUBLE: 'double';
FLOAT: 'float';
WHILE: 'while';
BREAK: 'break';
CONTINUE: 'continue';
IF: 'if';
ELSE: 'else';
RETURN: 'return';
VOID: 'void';
CONST: 'const';
TRUE: 'true';
FALSE: 'false';


ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';
MOD: '%';	
NOT: '!';
NEQ: '!=';
EQ: '==';
GT: '>';
LT: '<';
GE: '>=';
LE: '<=';
AND: '&&';
OR: '||';


Ident
    : [a-zA-Z_] [a-zA-Z_0-9]*
    ;

IntConst
    : DecimalConst
    | OctalConst
    | HexadeConst
    ;

//TODO
fragment DecimalConst
    : '0'
    | [1-9] [0-9]*
    ;

fragment OctalConst
    : '0' [0-7]+
    ;

fragment HexadeConst
    : ('0x'|'0X') [0-9a-fA-F]+
    ;

FloatConst
    : PreFDConst ('f'|'F')
    ;

DoubleConst
    : PreFDConst
    ;

fragment PreFDConst
    : DoubleVal Exponent?
    | [0-9]+ Exponent
    ;

fragment DoubleVal
    : [0-9]+ '.' [0-9]+
    | [0-9]+ '.'
    | '.' [0-9]+
    ;

fragment Exponent
    : ('e'|'E') (ADD|SUB)? [0-9]+
    ;


/****** skips  ******/
NewLine
    : (
        '\r' '\n'?
        | '\n'
    )
    -> skip
    ;

WhiteSpace
    : (
        [ \t]+
    ) 
    -> skip
    ;


LineComment
    : (
        '//' ~[\r\n]*
    )
    -> skip
    ;

BlockComment
    : (
        '/*' .*? '*/'
    )
    ->skip
    ;
