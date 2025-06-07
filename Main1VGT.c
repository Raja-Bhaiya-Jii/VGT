//Program For table.

#include<stdio.h>

int main()
{
    int num,i;
     printf("Enter the number = ");
     scanf("%d", &num);

     printf("The table of %d.\n");

     for ( i = 1; i <= 10; i++)
     {
        
        printf("%d x %d = %d\n", num, i, num*i);
        
     }
      for ( i = 0; i < 10; i++)
      {
        (i==num)?printf("Kya Baat Hai."):5;
      }
      
     
    return 0;
}
