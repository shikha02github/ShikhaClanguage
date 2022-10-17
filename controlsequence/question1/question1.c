#include<stdio.h>
void main()
{
int i,j;
printf("enter value of i,j");
scanf("%d%d",&i,&j);
if(i<20 && j<20)
printf("both variable are not having 20");
else if(i<=20 || j<=20)
printf("atleast one of the variable is having 20");
else if(i<=40 && j<=40)
printf("both are less than or equal to 40");
else
printf("both are not less than or equal to 40");
} 
