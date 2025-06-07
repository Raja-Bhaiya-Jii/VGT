// Programe for convert 'Ferenheit to Celcius'.

#include <stdio.h>

int main()
{
    float Fnt, ans;
    printf("Enter the value in Ferenheit: ");
    scanf("%f", &Fnt);

    ans = (Fnt-32)*5/9;
    printf("The enter value is %.2f Celcius.\n", ans);
    return 0;
}
