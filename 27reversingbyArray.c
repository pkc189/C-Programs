/*Program to reverse using Array  by Pankaj*/
#include<stdio.h>
void main()
{ int a[20],i,n;
printf("Enter Elements limit : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("The reverse order is \n");
for(i=n-1;i>=0;i--)
{printf("%d ",a[i]);
}}
