#include<stdio.h>
int main()
{
int arr1[5]={10,11,12,13,14},arr2[5],i;
for(i=4;i>=0;i--)
	arr2[i]=arr1[4-i];
for(i=0;i<5;i++)
	printf("%d ",arr2[i]);
}
