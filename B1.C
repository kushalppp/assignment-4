#include<stdio.h>

int fecto(int n)
{
if(n>=1)
return n*fecto(n-1);
else
return 1;
}

 main()
{
int no;
printf("enter no that you want to factorial");
scanf("%d",&no);
printf(" factorial of %d = %d",no,fecto(no));

}

