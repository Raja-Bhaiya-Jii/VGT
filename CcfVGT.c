// Programe for convert 'Celcius to Ferenheit'.

#include <stdio.h>

int main()
{
    float Cls, ans;
    printf("Enter the value in Celcius: ");
    scanf("%f", &Cls);

    ans = (9 / 5) * Cls + 32 + 32;
    printf("The enter value is %.2f Ferenheit.\n", ans);
    return 0;
}
