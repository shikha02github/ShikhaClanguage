#include<stdio.h>
int factorial(int x);
int find_ncr(int x,int y);
int find_npr(int x,int y);
int main()
{
int n,r,ncr,npr;
printf("enter given n and r");
scanf("%d%d",&n,&r);

ncr=find_ncr(n,r);
npr=find_npr(n,r);
printf("%dc%d=%d",n,r,ncr);
printf("%dp%d=%d",n,r,npr);
return 0;
}
int find_ncr(int x,int y)
{
int res;
res=factorial(x)/(factorial(y)*factorial(x-y));
return res;
}

int find_npr(int x,int y)
{
int res;
res=factorial(x)/factorial(x-y);
return res;
}
int factorial(int n)
{
if(n==0)
{
return 1;
}
else
{
return(n*factorial(n-1));
}
}
