#include<stdio.h>
#include<string.h>
int main()
{
char str[6];
int i;
printf("\nenter any string");
gets(str);
printf("\nthe input string is [%s]\n",str);

for(i=0;i<=strlen(str);i++)
{
if(str[i]>=97 && str[i]<=122)
str[i]=str[i]-32;
else if(str[i]>=65 && str[i]<=122)
str[i]=str[i]+32;
}
printf("\nthe converted string is :[%s]\n",str);
return 0;
}



