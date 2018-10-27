#include<stdio.h>
void show();
void calc();
main()
{
 char con='y';
while(con=='y')
{ 
show();
calc();
printf("\n\n");
printf("Do you want to continue : ");
con=getche();
}}
 void show()
{
 gotoxy(20,3);
printf("0 1 2");
gotoxy(20,5);
printf("3 4 5");
gotoxy(20,7);
printf("6 7 8");
gotoxy(20,9);
printf("9 + -");
gotoxy(20,11);
printf("* / %");
}
void calc()
{
 int first,second,res;
 char choice;
gotoxy(10,13);
printf("Enter first number  :");
scanf("%d" ,&first);
gotoxy(10,15);
printf("Enter second number :");
scanf("%d",&second);
gotoxy(10,17);
printf("Enter your choice :");
choice=getche();
printf("\n\n");
if(choice==43)
{
 res=first+second;
printf("The sum of%d and %d is %d",first ,second,res);}
0 1 2
3 4 5 
6 7 8
9 + -
* / %
}
