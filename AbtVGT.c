// Programe for 'Average between three values'.

#include <stdio.h>

int main()
{
    float a,b,c,avg;
    printf("Enter the value in a: ");
    scanf("%f", &a);

    printf("Enter the value in b: ");
    scanf("%f", &b);

    printf("Enter the value in c: ");
    scanf("%f", &c);

    avg=(a+b+c)/3;
   

    printf("The Average value is %.2f.\n", avg);
    return 0;
}
