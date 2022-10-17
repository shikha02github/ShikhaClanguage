#include<stdio.h>
int main()
{
int arr[50],i,position,n;
printf("enter num of elements in array\n");
scanf("%d",&n);
printf("enter elements %d \n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the location where you wish to delete\n");
scanf("%d",&position);
if(position>=n+1)
printf("deletion not posible\n");
else
for(i=position-1;i<n-1;i++)
arr[i]=arr[i+1];
printf("resultant array \n");
for(i=0;i<n-1;i++)
	printf("%d\n",arr[i]);
}
