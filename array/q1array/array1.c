#include<stdio.h>
void main()
{
int i,len=0;
char a[50];
printf("\nenter your name");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
len++;
}
printf("\nlength of your name is %d",len);
printf("\nlength of array is form %d\n",len-1);
}

