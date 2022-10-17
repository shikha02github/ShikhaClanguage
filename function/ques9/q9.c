#include<stdio.h>
void transpose(int a[2][2],int t[2][2]);
void main()
{
int i,j;
int a[2][2],t[2][2];
printf("enter matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d ",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",t[i][j]);
}
printf("\n");
}


           printf("before transpose matrix\n");
           for(i=0;i<2;i++)
           {  
           for(j=0;j<2;j++)
           {
           printf("%d ",a[i][j]);
           }
           printf("\n");
           }

transpose(a,t);
printf("transpose of matrix a is :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",t[i][j]);
}
printf("\n");
}
}

           void transpose(int a[2][2],int t[2][2])
           {
           int row,col;
           for(row=0;row<2;row++)
           {
	   for(col=0;col<2;col++)
	   {
       	   t[row][col]=a[col][row];
       	   }
           }
	  }

