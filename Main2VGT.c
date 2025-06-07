// Programe for Calculation()

#include<stdio.h>
int main()
{
  int a,b,c,ch,ch1;
    do
   {
    printf("Enter value of a & b: ");
    scanf("%d%d", &a, &b);

    printf("\n Press 1 for Addition. ");
    printf("\n Press 2 for Subtraction.");
    printf("\n Press 3 for Multiplication.");
    printf("\n Press 4 for Division.");

    printf("\nEnter Your Choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c= a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        printf("Try Again.");
        break;
    }
    printf("\n      Result = %d", c);

    printf("\n\nPress 1 for Again procced: ");
    scanf("%d",&ch1);
   } while (ch1==1);
   
    printf("\nThank You.");
    return 0;

}

