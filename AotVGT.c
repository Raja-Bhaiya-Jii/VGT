//Programe for 'Area of Triangle'.

#include<stdio.h>

int main()
{
    float base, height, area,c = 0.5;
    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

     area=c*base*height;
     printf("Area of the triangle is %f.\n", area);
    return 0;
}
