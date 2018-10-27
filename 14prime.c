#include<stdio.h>
int main()
{int n,i,k;
printf("Enter any number : ");
scanf("%d",&n);
    i=1;
      k=0;
       while(i<=n)
{
         if(n%i==0)
      k=k+1;
       i++;
                }
           if(k==2)
    printf("%d is prime number ",n);
       else
           printf("%d is not a prime number ",n);
      }
