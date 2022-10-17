#include<stdio.h>
void s();
void fun(int a);
int d=50;
int main()
{
auto int a=10;
register int b;
s();
fun(a);
printf("\n auto a%d",a);
printf("\n register b is %d",b);
s();
extern int d;
printf("\n extern d is %d",d);
return 0;
}
void s()
{
static int c;
c+=10;
printf("\n static c is %d",c);
}
void fun(int a)
{
a++;
}
