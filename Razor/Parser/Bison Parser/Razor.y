%{

  #include <cstdio>
  #include <iostream>

  using namespace std;

  // Declare stuff from Flex that Bison needs to know about:

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;

 void yyerror(const char *s);
  
%}


// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  Initially (by default), yystype
// is merely a typedef of "int", but for non-trivial projects, tokens could
// be of any arbitrary data type.  So, to deal with that, the idea is to
// override yystype's default typedef to be a C union instead.  Unions can
// hold all of the types of tokens that Flex could return, and this this means
// we can return ints or floats or strings cleanly.  Bison implements this
// mechanism with the %union directive:
%union {
  int ival;
  float fval;
  char *sval;
}

// Define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the %union:
%token <ival> INT
%token <fval> FLOAT
%token <sval> IF
%token <sval> OPENING_CURLY_BRACKET CLOSING_CURLY_BRACKET
%token <sval> STRING
%token <sval> KEYWORD
%token <sval> OPERATOR
%token <sval> SEPARATOR
%token <sval> COMMENT
%token <sval> IDENTIFIER
%token <sval> SEMICOLON
%token <sval> DATATYPE
%token <sval> RETURN


%%
// This is the actual grammar that bison will parse, but for right now it's just
// something silly to echo to the screen what bison gets from flex.  We'll
// make a real one shortly:

Razor:

  BOD  Decleration footer {
      cout <<"Gammer" << endl; };
BOD:
IF OPENING_CURLY_BRACKET CLOSING_CURLY_BRACKET {
cout <<$1<< $2 << $3 << endl;
cout<<"BISON FOUND IF"<<endl;};

Decleration:
headers;
headers:
headers header | header;

header:
DATATYPE IDENTIFIER OPERATOR INT SEMICOLON{
cout << $1 << $2 << $3 << $4 << $5 << endl;
	};

footer:
  RETURN INT SEMICOLON{
cout << $1 << $2 << $3<< endl;
}
  ;
%%

int main(int, char**) {
  // Open a file handle to a particular file:
  FILE *myfile = fopen("Input.Razor", "r");
  // Make sure it is valid:
  if (!myfile) {
    cout << "I can't open a.example!" << endl;
    return -1;
  }
  // Set Flex to read from it instead of defaulting to STDIN:
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
}
void yyerror(const char *s) {
  cout << "EEK, parse error!  Message: " << s << endl;
  // might as well halt now:
  exit(-1);
}