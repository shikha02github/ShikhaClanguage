#include<stdio.h>
int main()
{
int c,n,r,s=0;
printf("enter the value of n");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
s=r+(s*10);
n=n/10;
}
if(c==s)
printf("no is palindrom");
else
printf("no is not palindrom");
return 0;
}
