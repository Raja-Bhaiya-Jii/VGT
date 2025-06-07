// Programe of 'Area of Circle'.

#include <stdio.h>

int main()
{
    float area, r, p = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &r);
    area = p * r * r;
    printf("Area of the Circle is %f.\n", area);
    return 0;
}
