#include<stdio.h>
void main()
{
int a[10],i,pos,size,item;

printf("enter array element=");
scanf("%d",&size);
for(i=0;i<size;i++)
{
	printf("\nenter elements=");
scanf("\n%d",&a[i]);
}
printf("enter position we want to store");
scanf("%d",&pos);
printf("enter item which want to insert");
scanf("%d",&item);
for(i=0;i>size;i++)
{
a[i]=a[i-1];
}
a[pos]=item;

printf("resultant array element");
for(i=0;i<size;i++)
{
printf("\n%d",a[i]);
}

}

