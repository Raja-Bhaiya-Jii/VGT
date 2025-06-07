// Programe for show number 'Palidrome or Not'.

#include <stdio.h>

int main()
{
    int a, rev = 0, n, digit = 0, ch;

        printf("Enter number: ");
        scanf("%d", &a);
        n = a;
        while (a != 0)
        {
            digit = a % 10;
            rev = rev * 10 + digit;
            a /= 10;
        }

        if (n == rev)
        {
            printf("This number is palidrome.\n");
        }
        else
        {
            printf("This number is not palidrome.");
        }

       
    return 0;
}
