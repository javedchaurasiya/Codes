#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
char ch;
int ct=0;
ch=getchar();
while(ch!=EOF)
{
if(isalpha(ch)==0)ct++;
ch=getchar();
}
fprintf(stderr,"\n %d \n",ct);
exit(0);
return 0;
}
