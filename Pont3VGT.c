// Programe of arrange array values in desending order by pointer.//

#include <stdio.h>
int main()
{
    int *ptr, a[10], sm, i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {

            ptr = &a[j];

            if (*ptr < *(ptr + 1))
            {
                sm = *(ptr);
                *(ptr) = *(ptr + 1);
                *(ptr + 1) = sm;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
