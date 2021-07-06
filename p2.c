#include<stdio.h>

int swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}

main()
{
int a,b;
printf("enter two no.");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("a is %d and b is %d",a,b);
}