#include<stdio.h>

int printed( char c,int m)
{
int i ,r;
for(i=1;i<=m;i++)
{
r=printf(" %c ",c);

}
return r;
}
main()
{
int no;
char chr,result;

printf("enter a character\n");
scanf("%c",&chr);
printf("enter a no of times printed\n");
scanf("%d",&no);
result=printed(chr,no);
printf(" %c ",result);
}
