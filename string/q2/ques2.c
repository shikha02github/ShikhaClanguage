#include<stdio.h>
#include<string.h>
void revstring();
int main()
{
printf("enter string");
revstring();
return 0;
}
void revstring()
{
char c;
scanf("%c",&c);
if(c!='\n')
{
revstring();
printf("%c",c);
}
}
