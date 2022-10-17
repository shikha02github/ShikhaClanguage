#include<stdio.h>
void main()
{
int i;
char ch;
printf("uppercase alphabets are:\n");
for(ch=65;ch<=90;ch++)
{
printf("%c",ch);
printf(" ");
}
printf("\n");
printf("\n lower case alphabets are:\n");
for(ch=97;ch<=122;ch++)
{
printf("%c",ch);
printf(" ");
}
printf("\n");
printf("\n the number from 0-9 are:\n");
for(i=0;i<10;i++)
{
printf("%d",i);
printf(" ");
}
}
