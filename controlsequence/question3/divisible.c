#include<stdio.h>
void main()
{
int i,a,sum=0;
printf("enter a value");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
if(i%5==0)
{
continue;
}
else
{
sum=sum+i;}
}
printf("sum=%d",sum);
}
