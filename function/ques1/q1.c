#include<stdio.h>
int fact(int);
void main()
{
int n,r,ncr;
printf("enter a number n\n");
scanf("%d",&n);
printf("enter a number r\n");
scanf("%d",&r);

ncr=fact(n)/(fact(r)*fact(n-r));
printf("value of %d%d%d\n",n,r,ncr);
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
