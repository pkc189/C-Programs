/*Program to find number divisible by five */
#include<stdio.h>
void main()
{  int num,i;
   printf("Enter the number upto you want ");
   scanf("%d",&num);
    for(i=0;i<=num;i++)
  { if(i%5==0&&i!=0)
     printf("%d\t  ",i);
    if(i==num/2)
  {printf("\n");}
     
     }}
