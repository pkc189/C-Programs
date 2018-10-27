/*Program to convert binary to decimal */
#include<stdio.h>
#include<math.h>

void main()
{
 int num1,num2,decimal=0,power,i,r,sum=0,k,j,a[20]={0};
 printf("Enter Ist binary numbers = ");
 scanf("%d",&num1);
 for(i=0;num1!=0;i++)
{
  r=num1%10;
   
   power=pow(2,i);
  decimal=decimal+power*(r);
num1=num1/10;
   }
printf("Enter IInd binary numbers = ");
 scanf("%d",&num2);
 for(i=0;num2!=0;i++)
{
  r=num2%10;
   
   power=pow(2,i);
  decimal=decimal+power*(r);
num2=num2/10;
   }
decimal=(decimal+decimal)/2;
printf("The sum of two binary is  ");

  while(decimal!=0)
{
   r=decimal%2;
    decimal=decimal/2;

for(k=0;decimal!=0;k++)


{a[k]=r;

   j=k;           }}

{
  for(j=k;j<=k;j--)
    printf("%d",a[j]);




}






}


   
