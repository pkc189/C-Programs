/*
ABCDDCBA
ABC  CBA
AB    BA
A      A
*/

#include<stdio.h>
#include<string.h>
void main()
{ char k;
 int i,j;
for(i=0;i<4;i++)
{k='A';
{for(j=0;j<8;j++)
{if(j<(4-i)||j>(3+i))
  {printf("%c",k);
   j<4?k++:k--;
if(j==4)
 printf("%c",k);
         }
  else
   { printf(" ");
      if(j>3)
           k--;  } }
 printf("\n");}}}

