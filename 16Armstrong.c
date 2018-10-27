#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{ int i,j,r,power,sum=0,t;

  for(i=1;i<1000;i++)
{  t=i;
 
  for(j=1;j<=i;j++)
  {
    r=i%10;
    i=i/10;
     power=pow(r,i);
     sum=sum+power;}
   
     if(t==sum)
{printf("%d",sum);}}}
