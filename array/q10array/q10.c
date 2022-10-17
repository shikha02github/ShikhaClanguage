#include<stdio.h>
int main()
{
int a[10]={10,15,20,25,30,35,40,45,50,55};
int even[5]={0};
int odd[5]={0};
int j=0,k=0;
for(int i=0;i<=10;i++)
{
if(a[i]%2!=0)	
{
odd[j]=a[i];
j++;
}
else
{
even[k]=a[i];
k++;
}
}
printf("odd array:");
for(int i=0;i<5;i++)
{
printf("\t%d",odd[i]);
}
printf("\neven array:");
for(int i=0;i<5;i++)
{
printf("\t%d",even[i]);
}
return 0;
}
