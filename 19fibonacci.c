/*
0 1 1 2 3 5 8 13 21 34 55 89
*/
#include<stdio.h>
void main()
{ int i,a=0,b=1,c;
  printf("0 1 ");
for(i=0;i<10;i++)
 { c=a+b;

  
  printf("%d ",c);
   a=b;b=c;
}}
