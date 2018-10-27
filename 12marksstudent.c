#include<stdio.h>

void main()
{
 int marks[2][6],i,j;
float sum[2]={0};
for(i=0;i<2;i++)
   {printf("\nEnter the marks of %d student ",(i+1));
   for(j=0;j<6;j++)
       {printf("\nEnter the marks of %d subject",j+1);
          scanf("%d",&marks[i][j]);
           sum[i]=sum[i]+marks[i][j];
}}

printf("\n Rollno total marks Avg ");
 for(i=0;i<100;i++)
printf("\n%d %d %f ",i+1),sum[i],(sum[i]/60)*100);


}
