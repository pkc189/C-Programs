/*Program to convert given binary number to decimal */
#include<stdio.h>
#include<math.h>
void main()
{
  int num,i=0,a,sum=0,r;
  printf("Enter the Binary digit = ");
  scanf("%d",&num);
while(num!=0)
{ 
    r=num%10;
    num=num/10;
    ++i;
    a=pow(i,2);
    sum=a*r+sum;
    ;}
    printf("\nDecimal= %d",sum);}
  
