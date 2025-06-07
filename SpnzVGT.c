// Programe for show input number 'Positive, Negetive & Zero'.

#include <stdio.h>

int main()
{
    float a;

    printf("Enter the value: ");
    scanf("%f", &a);

    if (a > 0)
    {
        printf("The enter value is positive.");
    }
    else if (a < 0)
    {
        printf("The enter value is Negetive.");
    }
    else 
    {
        printf("The enter value is Zero.");
    }
    return 0;
}
