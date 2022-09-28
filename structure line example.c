#include<stdio.h>
struct print{
char x[10];
char y[10];
char z[10];
};struct print s=("ch","s","sen");
int main()
{
printf("%s\n%s\n%s\n",s.x,s.y,s.z);
}
