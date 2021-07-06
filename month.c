#include<stdio.h>

int monthdays(month)
{
switch(month)
{
case 1 :
case 3 :
case 5 :
case 7:
case 8:
case 10:
case 12:
{
printf(" In this month 31 days");
break;
}

case 4 :
case 6:
case 9:
case 11:
{
 printf(" In this month 30 days");
break ;
}
case 2 :
{
printf(" In this month 29 and 28 days");
break ;
}

default :
     printf(" enter month");
}
}
main()

{
int month;
printf("enter month no :");
scanf("%d",&month);
monthdays(month);
}