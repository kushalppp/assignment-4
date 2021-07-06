#include<stdio.h>

int prime(int no)
{
int x ,flag=0;
for (x=2;x<no;x++)
{
if(no%x==0)
{
flag = 1;
break ;
}
}
if(flag==0)

printf(" %d is prime no",no);
else
printf(" %d is not prime",no);
}



int rangeprime( int no1, int no2)
{
 int n, i;
for (n=no1;n<=no2;n++)
  {
    for(i=2;i<n;i++)
       {
        if(n%i==0) 
            break;
    }
 if(i==n)
          printf("%d \n",n);
    }
}


main()
{
int number,n1,n2;
printf("enter a no to check prime or not");
scanf("%d",&number);
prime(number);
printf(" \n enter two no. to find prime on this range.");
scanf("%d %d",&n1 ,&n2);
rangeprime(n1 ,n2); 

}