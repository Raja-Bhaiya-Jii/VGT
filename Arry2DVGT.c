// 2-D Arrye apply for addition between two matrix.//

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("\nEnter the value of A Matrix: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the value of B Matrix: \n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\nAfter Addition C Matrix.\n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
