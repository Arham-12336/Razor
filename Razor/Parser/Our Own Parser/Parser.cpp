#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string character;
    std::string data;
	std::ifstream MyReadFile("test.txt");
	
	while (getline (MyReadFile, data))
	{
		for(int i=0; i < data.length(); i++)
		{
			character = data[i];
			if(character == "+"){
				std::cout<<"(operator)";
			}
			else if(character == "f")
			{
				i++;
				character = data[i];
				if(character == "o")
				{
					i++;
					character = data[i];
					if(character == "r")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "for";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "-"){
				std::cout<< "(operator)";
				 
			}
			else if(character == "i")
			{
				i++;
				character = data[i];
				if(character == "f")
				{
					
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "/"){
				std::cout<< "(operator)";
				 
			}
			else if(character == "e")
			{
				i++;
				character = data[i];
				if(character == "l")
				{
					i++;
					character = data[i];
					if(character == "s")
				{
					i++;
					character = data[i];
					if(character == "e")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "*"){
				std::cout<< "(operator)";
				 
			}
			else if(character == "B")
			{
				i++;
				character = data[i];
				if(character == "o")
				{
					i++;
					character = data[i];
					if(character == "o")
				{
					i++;
					character = data[i];
					if(character == "l")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "%"){
				std::cout<< "(operator)";
				 
			}
			else if(character == "w")
			{
				i++;
				character = data[i];
				if(character == "h")
				{
					i++;
					character = data[i];
					if(character == "i")
				{
					i++;
					character = data[i];
					if(character == "l")
				{
					i++;
					character = data[i];
					if(character == "e")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "{"){
				std::cout<< "(braces)";
				 
			}
			else if(character == "B")
			{
				i++;
				character = data[i];
				if(character == "r")
				{
					i++;
					character = data[i];
					if(character == "e")
				{
					i++;
					character = data[i];
					if(character == "a")
				{
					i++;
					character = data[i];
					if(character == "k")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "}"){
				std::cout<< "(braces)";
				 
			}
			else if(character == "c")
			{
				i++;
				character = data[i];
				if(character == "l")
				{
					i++;
					character = data[i];
					if(character == "a")
				{
					i++;
					character = data[i];
					if(character == "s")
				{
					i++;
					character = data[i];
					if(character == "s")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "("){
				std::cout<< "(braces)";
				 
			}
			else if(character == "c")
			{
				i++;
				character = data[i];
				if(character == "o")
				{
					i++;
					character = data[i];
					if(character == "n")
				{
					i++;
					character = data[i];
					if(character == "s")
				{
					i++;
					character = data[i];
					if(character == "t")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == ")"){
				std::cout<< "(braces)";
				 
			}
			else if(character == "f")
			{
				i++;
				character = data[i];
				if(character == "a")
				{
					i++;
					character = data[i];
					if(character == "l")
				{
					i++;
					character = data[i];
					if(character == "s")
				{
					i++;
					character = data[i];
					if(character == "e")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "["){
				std::cout<< "(braces)";
				 
			}
			else if(character == "c")
			{
				i++;
				character = data[i];
				if(character == "a")
				{
					i++;
					character = data[i];
					if(character == "s")
				{
					i++;
					character = data[i];
					if(character == "e")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "]"){
				std::cout<< "(braces)";
				 
			}
			else if(character == "N" || character == "n")
			{
				i++;
				character = data[i];
				if(character == "u" || character == "U")
				{
					i++;
					character = data[i];
					if(character == "l" || character == "L")
				{
					i++;
					character = data[i];
					if(character == "l" || character == "L")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == ";"){
				std::cout<< "(semi colon)";
			}
			else if(character == "t")
			{
				i++;
				character = data[i];
				if(character == "r")
				{
					i++;
					character = data[i];
					if(character == "u")
				{
					i++;
					character = data[i];
					if(character == "e")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			
			else if((character >= "a" && character <= "z") || (character >= "A" && character <= "Z")){
				i++;
				character = data[i]; 
				while((character >= "a" && character <= "z") || (character >= "A" && character <= "Z") || (character >= "0" && character <= "9"))
				{
					i++;
					character = data[i];
				}
				std::cout<< "(name)";
				 
			}
			else if(character == "r")
			{
				i++;
				character = data[i];
				if(character == "e")
				{
					i++;
					character = data[i];
					if(character == "t")			
			{
				i++;
				character = data[i];
				if(character == "u")
				{
					i++;
					character = data[i];
					if(character == "r")
				{
					i++;
					character = data[i];
					if(character == "n")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if((character >= "0" && character <= "9")){
				i++;
				character = data[i]; 
				while(character >= "0" && character <= "9")
				{
					i++;
					character = data[i];
				}
				std::cout<< "(value)";
				 
			}
			
			else if(character == ">"){
				i++;
				character = data[i];
				if(character == "="){	
					std::cout<< "(operator)";
					 
				}
				else{
					 
					std::cout<< "(operator)";
					 
				}
			}
			else if(character == "v")
			{
				i++;
				character = data[i];
				if(character == "o")
				{
					i++;
					character = data[i];
					if(character == "i")
				{
					i++;
					character = data[i];
					if(character == "d")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			else if(character == "<"){
				i++;
				character = data[i];
				if(character == "="){
					std::cout<< "(operator)";
					 
				}
			}
			else if(character == "="){
				std::cout<< "(operator)";
			}
			else if(character == "i")
			{
				i++;
				character = data[i];
				if(character == "n")
				{
					
					i++;
					character = data[i];
					if(character == "t")
					{
						i++;
						character = data[i];
						if(character == " " || character == "=" || character == "{" || character == "\\" || character == ":" || character == "(" )
						{
							std::cout<< "(keyword)";
						}
						else
						{
							while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
							{
								i++;
								character = data[i];
							}
							std::cout<< "(name)";
						}
					}
					else
					{
						while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
						{
							i++;
							character = data[i];
						}
						std::cout<< "(name)";
					}
				}
				else
				{
					while(character != "=" && character != "{" && character != "\\" && character != ":" && character != " ")
					{
						i++;
						character = data[i];
					}
					std::cout<< "(name)";	
				}
			}
			
		}
	}
	
	
	
	
	MyReadFile.close();
   
   
   return 0;
}
