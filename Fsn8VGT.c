#include <stdio.h>
void chan(int a[]);
int main()
{
    int a[10], i, k;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &a[i]);
    }
    chan(a);
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}
void chan(int a[])
{
    int k;
    for (k = 0; k < 10; k++)
    {
        a[k] = a[k] + 1000;
    }
}
