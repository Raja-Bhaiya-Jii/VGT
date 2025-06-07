// Programe for addition of array with apply function.

#include <stdio.h>
int sum(int *);
int main()
{
    int a[10], i, sm;
    for (i = 0; i < 10; i++)
    {
        printf("%d Value:", i + 1);
        scanf("%d", &a[i]);
    }
    sm = sum(&a[0]);
    printf("%d", sm);

    return 0;
}
int sum(int *ptr)
{
    int i, sm = 0;
    for (i = 0; i < 10; i++)
    {
        sm = sm + (*ptr + i);
    }
    return sm;
}
