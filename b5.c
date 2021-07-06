#include<stdio.h>

int DtoB(int n)
{
if (n==1)
printf("1");
else
{
DtoB(n/2);
printf("%d",n%2);
}
}

main()
{
int no;
printf(" enter no.");
scanf("%d",&no);
DtoB(no);
}