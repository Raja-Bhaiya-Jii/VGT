// Programe for convert 'KM to MM'.

#include <stdio.h>

int main()
{
    float Km,con;
    printf("Enter the value in KM: ");
    scanf("%f", &Km);

   con=Km*1000*100*10;

    printf("The enter value is %.2f mm.\n", con);
    return 0;
}
