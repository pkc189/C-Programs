/*Program to find biggest number among three */
#include<stdio.h>
void main()
{
  int i,n[3],b=0;
  printf("Enter three numbers = ");
 for(i=0;i<3;i++)
{scanf("%d",&n[i]);
  if(n[i]>b)
  {b=n[i];}}
printf("The biggest number among three is %d",b);
}

