#include <stdio.h>

int main()
{
    int i, j;
    char a[15];
    printf("Enter line: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%c", &a[i + 1]);
    }

    for (i = 6; i > 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}
