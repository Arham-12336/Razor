#include<iostream>
char reverse[11][10] = {"else if","void","if","int ","else","for","do","while","return","switch","case"};
 
 int line = 1;//Number of lines
 
 void out(int a, char* s)//Type code of output word symbol
{
	printf("%d,<%s>\n", a, s);
}
 int lookup(char* token) //Realize looking up reserved words
{
	int i = 0;
	int index = 0;
	 int match = 0; //Whether match
	while (index != 11)
	{
		match = 0;
		while (reverse[index][i] != '\0')
		{
			if (reverse[index][i] == token[i])
				i++;
			else {
				match = -1; 
				break; 
			}
		}
		if (match == -1)
			index++;
		else {
			return index+1;
		}
	}
	return 0;
}
void scanner(FILE *fp)
{
	char ch;
	int i, c;
	char TOKEN[20];
	ch = fgetc(fp);
	if (isalpha(ch))
	{
		ch = tolower(ch);
		TOKEN[0] = ch;
		ch = fgetc(fp);
		ch = tolower(ch);
		i = 1;
		while (isalnum(ch))
		{
			TOKEN[i] = ch;
			i++;
			ch = fgetc(fp);
			ch = tolower(ch);
		}
		TOKEN[i] = '\0';
		fseek(fp, -1, 1);
		 c = lookup(TOKEN); //Find reserved words
		if (c == 0)
			 out(12, TOKEN); //Identifier
		else
			 out(c, TOKEN); //Reserved word
	}
	 else if (isdigit(ch)) // judge integer
	{
		TOKEN[0] = ch;
		ch = fgetc(fp);
		i = 1;
		while (isdigit(ch))
		{
			TOKEN[i] = ch;
			i++;
			ch = fgetc(fp);
		}
		 if (isalpha(ch)) //wrong identifier format
			printf("error in line %d,wrong format for it!\n",line);
		TOKEN[i] = '\0';
		fseek(fp, -1, 1);
		 out(13, TOKEN); //Integer
	}
	else switch (ch)
	{
	case '<':
		ch = fgetc(fp);
		if (ch == '=')
			out(14, "<=");
		else 
			if (ch == '>')
				out(15, "<>");
			else 
			{
				fseek(fp, -1, 1);
				out(16, "<");
			}
		break;
	case ':':
		ch = fgetc(fp);
		if (ch == '=')
			out(17, ":=");
		else 
		{
			fseek(fp, -1, 1);
			out(18, ":");
		}
		break;
	case '>':
		ch = fgetc(fp);
		if (ch == '=')
			out(19, ">=");
		else 
		{
			fseek(fp, -1, 1);
			out(20, ">");
		}
		break;
	case '+':
		out(21, "+"); 
		break;
	case '-':
		out(22, "-"); 
		break;
	case '*':
		if (fgetc(fp) == '/')
		{
			out(27, "*/");
		}
		else
		{
			out(23, "*");
			fseek(fp,-1,1);
		}
		break;
	case ';':
		out(24, ";"); 
		break;
	case '|':
		out(25, "|"); 
		break;
	case '/':
		ch = fgetc(fp);
		if (ch == '*')
		{
			out(26, "/*");
			 printf("Comment content:");
			char x=fgetc(fp), 
				y=fgetc(fp);
			while (x != '*'|| y!='/') 
			{
				printf("%c", x);
				x = y;
				y = fgetc(fp);
				if (x == '*'&&y == '/') 
				{ 
					printf("\n"); 
					out(27, "*/"); 
				}
			}
		}
		else
			fseek(fp,-1,1); 
		break;
	case '(':
		out(28, "(");
		break;
	case ')':
		out(29, ")");
		break;
	case ',':
		out(30, ",");
		break;
	case '.':
		out(31, ".");
		break;
	default:
		if (ch == ' ' || ch == '\n' || ch == '\t')
			if (ch == '\n')
				line++;
			else;
		else
			printf("error in line %d,can't recognize this character! %c\n", line, ch);
		break;
	}
}
 
 
int main()
{
	FILE *fp;
	fp = fopen("compare.uha", "r");
	
	 while (fgetc(fp) != EOF) //Whether it reaches the end of the code
	{
		fseek(fp,-1,1);
		 scanner(fp); //main function
	}
	
	char *filename = "compare.uha";

    // open the file for writing
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
    for (int i = 0; i < 10; i++)
        fprintf(fp, "This is the line #%d\n", i + 1);

    // close the file
    fclose(fp);
	return 0;
}
