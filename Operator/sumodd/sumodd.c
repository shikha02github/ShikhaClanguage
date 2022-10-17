#include<stdio.h>
void main()
{
int n,sum=0,c=1;
printf("enter the value of n:");
scanf("%d",&n);
while(c<=n)
{
if(c%2!=0)
{
sum=sum+c;
}
c++;
}
printf("sum of odd %d",sum);
}

