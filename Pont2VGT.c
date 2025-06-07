// Find highest value among them by Pointer.//
#include <stdio.h>

int main()
{
    int *ptr, a[10], Grt, i;

    ptr = &a[0];
    for (i = 0; i < 10; i++)
    {
        printf("Value= ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (*ptr < *(ptr + 1))
        {
            Grt = *ptr;
            *ptr = *(ptr + 1);
            *ptr = Grt;
        }
    }
    printf("%d", *ptr);
    return 0;
}
