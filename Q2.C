#include <stdio.h>

int power(int b,int m)
{
int x;
float r=1;

for(x=1;x<=m;x++)
r=r*b;
return r;

}
main()
{
int d,p,result;
printf ("enter base & power\n");
scanf("%d %d",&d,&p);
result=power(d,p);
printf("%d",result);
}

