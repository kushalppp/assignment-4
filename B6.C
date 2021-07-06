#include<stdio.h>

int DtoH(int n)
{
if (n==1)
printf("1");
else
{
printf("%X",n);
}
}

main()
{
int no;
printf(" enter no.");
scanf("%d",&no);
DtoH(no);
}


output:-
 enter no.2545
9F1