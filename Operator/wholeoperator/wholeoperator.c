#include<stdio.h>
void main()
{
int a,b;
int sum,sub,mul,mod;
float div;
printf("enter any two whole number");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
mod=a%b;
div=(float)a/b;
printf("\n addition of %d+%d=%d\n",a,b,sum);
printf("\n substraction of %d-%d=%d\n",a,b,sub);
printf("\n multiplication of %d*%d=%d\n",a,b,mul);
printf("\n modulas of %d%d=%d\n",a,b,mod);
printf("\n division of %d/%d=%f\n",a,b,div);
}
