// Programe for find value in array with apply function.

#include <stdio.h>
int Find(int *, int);
int main()
{
    int a[10], i, n, k;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &a[i]);
    }
    printf("Enter Value for find: ");
    scanf("%d", &n);
    k = Find(&a[0], n);
    if (k != 0)
    {
        printf("Value %d is found.", n);
    }
    else
    {
        printf("Value %d is not found.", n);
    }
    return 0;
}
int Find(int *ptr, int a)
{
    int i, k;
    for (i = 0; i < 10; i++)
    {
        if (a == *(ptr + i))
        {
            k++;
        }
    }
    return k;
}