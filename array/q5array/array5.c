#include<stdio.h>
void main()
{
int arr[10],i,n,sum=0,avg;
printf("enter the num of element you want to insert :");
scanf("%d ",&n);
for(i=0;i<n;i++)
{	

scanf("%d",&arr[i]);

}
printf("\n");
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<=n;i++)
{
   sum=sum+arr[i];
}
printf("\nsum=%d",sum);
avg=sum/n;
printf("\navg=%d",avg);

}
