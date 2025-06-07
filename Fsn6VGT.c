// Programe for find largest value in array with apply function.

#include <stdio.h>
int lgt(int *);
int main()
{
    int a[10], i, lrgt;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &a[i]);
    }
    lrgt = lgt(&a[0]);
    printf("Largest value is %d ", lrgt);

    return 0;
}
int lgt(int *ptr)
{
    int n, i;
    n = *ptr;
    for (i = 0; i < 10; i++)
    {
        if (n < *(ptr + i))
        {
            n = *(ptr + i);
        }
    }
    return n;
}
