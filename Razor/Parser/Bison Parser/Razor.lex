%{
  #include <iostream>

  #include "Razor.tab.h"
  using namespace std;
  extern int yylex();
%}


%option noyywrap

%%

[ \t\n]          ;
[0-9]+                                                                      { yylval.ival = atoi(yytext); return INT;}
[0-9]+\.[0-9]+                                                              { yylval.fval = atof(yytext); return FLOAT; }
\"(\\.|[^"])*\"                                                             { yylval.sval = strdup(yytext); return STRING; }
"main"|"if"|"strech"|"terminate"|"renew"                                    { yylval.sval = strdup(yytext); return KEYWORD; }
"Int"|"char"|"float"                                    { yylval.sval = strdup(yytext); return DATATYPE; }
"+"|"-"|"*"|"/"|"%"|"^"|"<"|">"|">="|"<="|"++"|"--"|"&"|"|"|""|"="|"="    { yylval.sval = strdup(yytext); return OPERATOR; }
"("|")"|"["|"]"                                                    { yylval.sval = strdup(yytext); return SEPARATOR; }
[#].*                                                                       { yylval.sval = strdup(yytext); return COMMENT; }
";"      		   {yylval.sval = strdup(yytext); return SEMICOLON;}
"IF"			{ yylval.sval = strdup(yytext); return IF;}
"{"			{ yylval.sval = strdup(yytext); return OPENING_CURLY_BRACKET;}
"}"			{ yylval.sval = strdup(yytext); return CLOSING_CURLY_BRACKET;}
"return"			{ yylval.sval = strdup(yytext); return RETURN;}

[a-zA-Z0-9]+      {
  // We have to strdup yytext because Flex will change it for the next token.
  // Note that this memory must be freed somewhere, so that's why we call
  // free() above in the Bison section.  (Aside: we use free() instead of
  // delete because strdup is a C function that uses malloc, not a C++
  // function that uses new.)
  yylval.sval = strdup(yytext);
  return IDENTIFIER;
}

.                ;
%%

/*int main(int, char*) {
  
  // open a file handle to a particular file:
  FILE *myfile = fopen("reads.ix", "r");
  // make sure it's valid:
  if (!myfile) {
    cout << "I can't open a.example"<< endl;
    return -1;
  }
  // set lex to read from it instead of defaulting to STDIN:
  yyin = myfile;
  
  // lex through the input:
  while(yylex());
}*/