#include<stdio.h>

int pascal(no)
{
int row,col,space,n;

for(row=0;row<no;row++)
{
   for(space=0;space<(no-row);space++)
     {
      printf(" ");
      }
   n=1;
    for(col=0;col<=row;col++)
    {
     printf(" %d",n);
   n=n*(row-col)/(col+1);
   }
printf("\n");
}
return n;
}
main()
{
 int no,result;
printf("enter no of rows");
scanf("%d",&no);
result=pascal(no);
}
 