/*Program to reverse number */ 
/*By pankaj */
#include<stdio.h>
void main()
{ long num,r,sum=0;
 printf("Enter the number you want to reverse = ");
 scanf("%ld",&num);
while(num!=0)
{ r=num%10;
  num=num/10;
   sum=sum*10+r;

 
}printf("\nThe reverse is %ld",sum);}
