#include<stdio.h>

int nextfibonacci(int no)
{
int n1=0,n2=1,nextterm,i,r,a;
for(i=3;i<no;i++)
{
nextterm=n1+n2;
n1=n2;
n2=nextterm;
if(nextterm==no)
{

r=n1+n2;
printf("%d ", r);

}
}
return r;
}
main()
{
int no;
printf("enter a  fibonacci no. that you want to print next term of fibonacci :");
scanf("%d",&no);
nextfibonacci(no);
}