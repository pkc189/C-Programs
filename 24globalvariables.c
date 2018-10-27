#include<stdio.h>
void fun1();
void fun2();
void fun3();
int b;
main()
{b=10;fun1();fun2();fun3();
b=b+10;
printf("%d",b);
}
void fun1()
{
 b=b+10;
printf("%d\n",b);
}
void fun2()
{ int b;
b=1000;
printf("%d\n",b);
}
void fun3()
{
 b=b+100;
printf("%d\n",b);
}
