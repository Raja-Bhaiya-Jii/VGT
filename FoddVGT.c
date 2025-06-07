#include <stdio.h>
int main()
{
    int n[5], i, digit, rev, k, s;
    for (i = 0; i < 5; i++)
    {
        printf("Enter %d Number: ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        s = n[i];
        while (s != 0)
        {
            digit = s % 10;
            s /= 10;
        }
        k = digit % 2;
        if (k != 0)
        {
            printf("First digit of %d is odd.\n", n[i]);
        }
    }
    return 0;
}