#include<stdio.h>
int flag=0;
int add()
{
int i,x,result;
printf("enter a two no\n");
scanf("%d %d",&i,&x);
result=i+x;
return result;
}
int sub()
{
int i,x,result;
printf("enter a two no\n");
scanf("%d %d",&i,&x);
result=i-x;
return result;
}
int mul()
{
int i,x,result;
printf("enter a two no\n");
scanf("%d %d",&i,&x);
result=i*x;
return result;
}
int div()
{
int i,x,result,y;
printf("enter a two no\n");
scanf("%d %d",&i,&x);
if(x!=0)
{
result=i/x;
return result;
}
else
{
 y=printf("ERROR-----flag=1 denominator cant be zero\n");
return y;
}
}

main()
{
int choice;
printf(" WELCOME IN CALCULATOR\n");
printf("1. addition\n");
printf("2. substraction\n");
printf("3. multiplication\n");
printf("4. divison\n");
printf("enter a choice\n");
scanf("%d",&choice);


switch(choice)
{
case 1:
{
int result;
result=add();
printf("result: %d",result);
break;
}
case 2:
{
int result;
result=sub();
printf("result: %d",result);
break;
}
case 3:
{
int result;
result=mul();
printf("result: %d",result);
break;
}
case 4:
{
int result;
result=div();
printf("result: %d",result);
break;
}

default:
 printf("ooops---not valid choice");

}
}

