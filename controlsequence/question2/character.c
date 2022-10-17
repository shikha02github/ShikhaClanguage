#include<stdio.h>
void main()
{
char z;
printf("enter char z");
scanf("%c",&z);
if(z=='A'||z=='a')
{
printf("Apple");
}
else if(z=='B'||z=='b')
{
printf("Ball");
}
else if(z=='D'||z=='d')
{
printf("Dog");
}
else if(z=='F'||z=='f')
{
printf("Fan");
}
else
{
printf(" wrong choice");
}
}
