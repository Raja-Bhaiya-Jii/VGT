// Programe of add enter collection of digit.//
#include<stdio.h>
int main()
{
   int a[5],i,sm=0;
   
   printf("Enter number: ");

   for ( i = 0; i < 5; i++)
   {
    scanf("%d",a[i]);
   }
   
   for ( i = 0; i < 5; i++)
   {
    sm=sm+a[i];
   }
   
   printf("%d",sm);
    return 0;
}
