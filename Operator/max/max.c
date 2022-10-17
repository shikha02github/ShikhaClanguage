#include<stdio.h>
void main()
{
int a,b,max;
printf("enter two number");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
printf("max of num %d and %d is %d\n",a,b,max);
}
