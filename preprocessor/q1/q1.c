#include<stdio.h>
#define FACT(n){\
for(int i=1;i<=n;i++)\
{\
f=f*i;\
}\
printf("\nfactorial of %d is :%d",n,f);\
}

int main()
{
   int n,i,f=1;
   printf("\nenter a number:");
   scanf("%d",&n);
   FACT(n);
   return 0;
}   
  
