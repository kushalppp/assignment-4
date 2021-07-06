#include<stdio.h>

int fib(int n)
{
if(n==1||n==2)
 return 1;
return(fib(n-1)+fib(n-2));
}


main()
{
int n,x,i;
printf("enter nth no. of fibonacci");
scanf("%d",&n);
printf("%d",fib(n));
printf("\nenter no. to print fibonacci");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
printf(" %d ",fib(i));
}
}