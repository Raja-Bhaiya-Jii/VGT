// Program for check Paledrome number with apply function.
#include <stdio.h>
int pdm(int a);

int main()
{
    int a, k;
    printf("Enter Number: ");
    scanf("%d", &a);
    k = pdm(a);
    if (k == a)
    {
        printf("This number (%d) is Paledrome.", a);
    }
    else
    {
        printf("This number (%d) is not Paledrome.", a);
    }
    return 0;
}
int pdm(int a)
{
    int i, dig, z = 0, n;
    n = a;
    while (n != 0)
    {
        dig = n % 10;
        z = z * 10 + dig;
        n = n / 10;
    }
    return z;
}