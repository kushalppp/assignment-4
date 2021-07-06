#include<stdio.h>

int gcd(int a,int b)
{

if(b!=0)
return(a,a%b);
else
return 1;
}

main()
{
int n1,n2;
printf(" enter two numbers for finding g.c.d");
scanf("%d %d",&n1,&n2);
printf("gcd of two no is %d",gcd(n1,n2));
}