// Name of program mainreturn.cpp 
#include <stdio.h>
#include<string.h>
int main(int argc, char** argv) 
{ 
	

	for (int i = 1; i < argc; ++i) 
	{
string st=argv[i];
if(st[0]!='-')printf("%s \n",st); 
}

	return 0; 
} 
