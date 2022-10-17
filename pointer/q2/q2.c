#include<stdio.h>
void main()
{
char *colour[6]={"red","green","blue","white","black","yellow"};
printf("\n colour=%d",colour);
printf("\n (colour+2)=%d",(colour+2));
printf("\n *colour=%s",*colour);
printf("\n *(colour+2)=%s",*(colour+2));
printf("\n *(colour+5)=%s",*(colour+5));
}
