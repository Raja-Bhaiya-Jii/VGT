#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k, sm;

    printf("Enter value of A matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter value of B matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sm = 0;
            for (k = 0; k < 3; k++)
            {
                sm = sm + (a[i][j] * b[j][k]);
            }
            c[i][j] = sm;
        }
    }
    printf("After Multiplication, Matrix C.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
