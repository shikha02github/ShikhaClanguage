#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2,d,m,y,formulla;
printf("enter the data month year");
scanf("%d%d%d",&d1,&m1,&y1);
printf("enter the 2nd date,month,year");
scanf("%d%d%d",&d2,&m2,&y2);
d=d1-d2;
m=m1-m2;
y=y1-y2;

formulla=(365*(y+(y/4)-(y/100)+(y/400))+d+((153*m+8)/5));
printf("no of days:%d",formulla);
return 0;
}
