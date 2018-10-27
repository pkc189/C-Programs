#include<stdio.h>
main()
{
 int m3,be,c,dl,cc,cs;float total,avg,per; 
 char name[15];
 printf("\t\t\t\t\t\t\tRESULT\n\n");
printf("Enter student name : ");
scanf("%s",&name);

printf("\nEnter Marks\n");
printf("Maths = ");
scanf("%d",&m3);
printf("\nBasic Electronics = ");
scanf("%d",&be);
printf("C Programming = ");
scanf("%d",&c);
printf("\nDigital logic = ");
scanf("%d",&dl);
printf("CCWT = ");
scanf("%d",&cc);
printf("Computational science = ");
scanf("%d",&cs);

 total=m3+be+c+dl+cc+cs;
avg=total/6;
per=(total*100)/240;
printf("Your total marks is = %f\n",total);
printf("Your percentage is %f",per);
}
