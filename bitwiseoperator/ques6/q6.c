                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   #include<stdio.h>
int main()
{
int num,pos;
printf("enter the number");
scanf("%d",&num);
printf("enter position");
scanf("%d",&pos);

printf("before num=%d\n",num);
num=num^1<<pos;
printf("after num=%d\n",num);
}
