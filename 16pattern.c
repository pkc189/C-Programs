/*  
1
01
010
1010
10101 
*/
#include<stdio.h>
int main()
 {  int k=0,i,j;
         for(i=1;i<6;i++)
{       for(j=1;j<=i;j++)
                if(j<=i&&k)
                      {printf("0");
                          k=0;}
                                       else
                          { printf("1");
                          k=1;
         }
                                      printf("\n");}}
