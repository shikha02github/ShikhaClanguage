#include<stdio.h>
int main()
{
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7,8,9,10};
int concat[10]={0};
for(int i=0;i<5;i++)
{
concat[i]=arr1[i];
}
for(int i=5; i<10; i++) 
{
    for(int j=i-5; j==i-5; j++) 
    {
        concat[i]=arr2[j];
    }

}
printf("concatenate array:");
for(int i=0;i<10;i++)
{
printf("\t%d",concat[i]);
}
return 0;
}




