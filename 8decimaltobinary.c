#include<stdio.h>
void main()
{
  int dec,bin,a[100],i=0,j;
printf("Enter the decimal= ");
scanf("%d",&dec);
{while(dec!=0)
 {a[i]=dec%2;
    dec=dec/2;
     i++;
     }
for(j=i;i>0;j--)
{
printf("%d ",a[j]);

    }
}}
