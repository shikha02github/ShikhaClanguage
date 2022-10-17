#include<stdio.h>
void swap(int a,int b);
int main()
{
int no1,no2;
printf("enter 1st number");
scanf("%d",&no1);
printf("enter 2nd number");
scanf("%d",&no2);
printf("before swapping:no1=%d,no2=%d",no1,no2);
swap(no1,no2);
}
void swap(int x,int y)
{
int temp;	

temp=x;
x=y;
y=temp;
printf("\n after swapping no1=%d,no2=%d",x,y);
}
