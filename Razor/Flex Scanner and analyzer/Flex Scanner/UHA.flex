%{

%}

%%
"int" |
"char" |
"float" |
"string" |
"void" {printf("%s  Data_Types \n",yytext);} 

[a-zA-Z] {printf("%s  Identifier\n",yytext);}

[0-9]*    {printf("%d value\n ");}

"if" | "else" | "while" | "elseif" | "for" | "switch" | "break" |
"case" | "class" | "return" | "delete" | "continue" {printf("%s Keyword\n", yytext);}
"\n"    {printf("  new line \n");}
"\t"    {printf("%s tab \n",yytext);}
";"	    {printf("%s Semi_colon \n",yytext);}
","		{printf("%s Coma \n",yytext);}
"'"		{printf("%s single_qoutation \n",yytext);}	
"="	    {printf("%s relational_operator  \n",yytext);}
"+"		{printf("%s Addition_opertor \n",yytext);}
">="	{printf("%s greaterthanequalsto_operator \n",yytext);}
"-"		{printf("%s subtraction_opertor \n",yytext);}
"<="	{printf("%s lessthanequalsto_operator \n",yytext);}
"/"		{printf("%s divsion_operator \n",yytext);}
"!="	{printf("%s doesnotequalsto_operator \n",yytext);}
"*"		{printf("%s multiplication_operator \n",yytext);}
"=="	{printf("%s Assignment_operator \n",yytext);}
">"		{printf("%s greaterthan_operator \n",yytext);}
"<"		{printf("%s lessthan_operator \n",yytext);}
"["		{printf("%s left_square_bracket \n",yytext);}
"("		{printf("%s left_round_bracket \n",yytext);}
"{"		{printf("%s left_curl_bracket \n",yytext);}
"}"		{printf("%s right_curl_bracket \n",yytext);}
")"		{printf("%s right_round_bracket \n",yytext);}
"]"		{printf("%s right_square_bracket \n",yytext);}

%%
yywrap(){}
int main()
{
FILE *fp;
char filename[50];
printf("Enter the filename: \n");
scanf("%s",filename);
fp = fopen(filename,"r");
yyin = fp;
yylex();


return 0;
}




