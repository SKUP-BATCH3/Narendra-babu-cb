#include<stdio.h>
void main()
{
char s1[]="rashmi";
char s2[]="gowda";
for(int i=0;i<strlen(s1);i++)
{
if(s1[i]=='\n')
break;
else
printf("%c",s1[i]);
}}
