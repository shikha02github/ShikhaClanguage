#include<stdio.h>

struct time
{
int hrs,minuts,second;
};
void main()
{
struct time t,temp;
printf("enter the time in hrs,minuts and second");
scanf("%d%d%d",&t.hrs,&t.minuts,&t.second);

//temp.hrs=t.hrs;
//temp.minuts=t.minuts;
//temp.second=t.second;

printf("\n hrs=%d \n minuts=%d \n second=%d \n",t.hrs,t.minuts,t.second);
}
