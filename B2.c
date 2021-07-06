#include<stdio.h>

int power(int base, int a)
{

if(a!=0)
return (base *power(base, a-1));
else
return 1;
}

main()
{
int base,pow,result;;
printf("enter a base and pow");
scanf("%d",&base);
scanf("%d",&pow);
result=power(base,pow);
printf("power of is = %d",result);
}