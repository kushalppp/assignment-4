#include<stdio.h>

int fibonacci(int no)
{
int i,a;
int n=0,j=1;
printf("%d %d",n,j);
for (i=3;i<no;i++)
{
  a=n+j;
 if(a<=no)
{
 printf(" %d  ",a);
  n=j;
  j=a;
}
}
return a;

}

main()
{
int no;
printf("enter no that uou print fibonacci");
scanf("%d",&no);
fibonacci(no);

}
