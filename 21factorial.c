#include<stdio.h>
void main()
{  long int num,fact=1,i;
printf("Enter any number = ");
scanf("%ld",&num);
 for(i=num;i>=1;i--)
{fact=fact*i;}printf("\nFactorial is %ld",fact);
}

