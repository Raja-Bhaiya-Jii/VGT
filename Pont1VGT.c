// Program of addition number by pointer.//
#include <stdio.h>
int main()
{
    int *ptr, a[5], sm, i;

    printf("Enter the value: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr = &a[0];
    sm = 0;
    for (i = 0; i < 5; i++)
    {
        sm = sm + *ptr;
        ptr++;
    }
    printf("Sum = %d", sm);

    return 0;
}
