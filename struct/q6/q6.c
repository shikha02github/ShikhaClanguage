#include<stdio.h>
struct complex
{
int real,imag;
};

int main()
{
struct complex x,y,c;
printf("enter the value of x and y for 1st complex");
scanf("%d%d",&x.real,&y.imag);
printf("enter the value of x and y for 2st complex");
scanf("%d%d",&x.real,&y.imag);

c.real=x.real+y.real;
c.imag=x.imag+y.imag;

printf("sum of complex :%d+%di",c.real,c.imag");
return 0;
}



