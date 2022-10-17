#include<stdio.h>
int main()
{
int num,n,newNum;
printf("enter any no:");
scanf("%d",&num);
printf("enter nth bit to set:");
scanf("%d",&num);
newNum=(1<<n)|num;
printf("bit set succesfully.n\n");
printf("no before setting %d bit:%d\n",n,num);
printf("no after setting %d bit:%d\n",n,newNum);
return 0; 
}
