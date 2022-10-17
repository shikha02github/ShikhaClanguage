#include<stdio.h>
int main()
{
int num,count=0;
printf("enter integer num:\n");
scanf("%d",&num);

while(num!=0)
{
	if((num & 1)==1)
	count++;
	num=num>>1;
}
printf("no of one's are \n%d\n",count);
return 0;
}
