#include<stdio.h>
int main()
{
int n=0,s=0,r=0;
printf("\n enter num");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("\n sum of digits is %d",s);
return 0;
}
