#include<stdio.h>

int main()
{
   int a,b,c;

   printf("Enter Number a = ", a);
   scanf("%d", &a);

   printf("Enter Number b = ", b);
   scanf("%d", &b);

   c=a;
   a=b;
   b=c;

   printf("After Swapping a = %d\n", a);
   printf("After Swapping b = %d", b);

    return 0;
}
