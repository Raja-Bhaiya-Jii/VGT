// Programe for show a is divisible by b OR Not.

#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    c = a % b;

    if (c != 0)
    {
        printf("a is not divisible by b.");
    }
    else 
    {
        printf("a is divisible by b.");
    }
    
    return 0;
}
