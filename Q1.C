#include <stdio.h>


int fect(m)
{
int i,f=1;
for(i=1;i<=m;i++)
f=f*i;
return f ;
}

main()
{
int n,y;
printf("enter a no.");
scanf("%d",&n);
y=fect(n);
printf("%d",y);
}
