/*program to find sum of odd and even numbers */
#include<stdio.h>
void main()
{ int a,odd=0,even=0;
  char option;
   printf("\nEnter any number = ");
  do
  {
     scanf("%d",&a);
      if(a%2==0)
       {even=even+a;}
        else
        {odd=odd+a;}
     printf("\nDo you want to continue (y/n) = \n");
     scanf("%c",&option);}
   while(option=='y');
printf("Sum of even is %d\n",even);
printf("Sum of odd is %d\n",odd);
}
