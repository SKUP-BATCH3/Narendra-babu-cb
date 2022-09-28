#include<stdio.h>
void main()
{
char s[]="rashmi2020.a_";
int len=strlen(s);
for(int i=0;i<len;i++)
{
if(s[i]>='a'&s[i]<='z')
printf("%c",s[i]);
}
}
