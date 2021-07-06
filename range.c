#include<stdio.h>

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
int range1,range2;
printf("enter range");
scanf("%d %d",&range1, &range2);
rangeprime(range1,range2);
}