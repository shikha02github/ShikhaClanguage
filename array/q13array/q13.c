#include<stdio.h>
void main()
{
int arr[]={3,4,5,3,4,6,7,7,8};
int length=sizeof(arr)/sizeof(arr[0]);
printf("repeated numbers in an array:\n");
for(int i=0;i<length;i++)
{
	for(int j=i+1;j<length;j++)
	{
		if(arr[i]==arr[j])
		printf("%d\n",arr[j]);
	}
}
}
