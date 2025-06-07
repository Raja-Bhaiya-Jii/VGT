// Programe for show greter among four numbers.

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    printf("Enter value c: ");
    scanf("%d", &c);

    printf("Enter value d: ");
    scanf("%d", &d);

    e = (a > b && a > c) ? a : (b > c) ? b
                                       : c;
    f = (e > d) ? e : d;

    printf("The greter value of these three numbers is %d.", f);

    return 0;
}
