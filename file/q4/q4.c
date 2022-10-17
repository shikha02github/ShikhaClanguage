#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr,file;
char filename[10],c;
printf("enter file name to open\n");
scanf("%s",filename);

fptr=fopen("filename","r");
if(fptr==NULL)
{
printf("error");
exit(1);
}

c=fgetc(fptr);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fptr);
}

fclose(fptr);
return 0;
}
