#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=10,num;
printf("enter the 10 random number:");
for(i=0;i<10;i++)
{
num=random();
printf("%d\n",num);
}
return 0;
}
