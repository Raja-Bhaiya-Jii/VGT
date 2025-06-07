// Programe for 'Simple Intrest'.

#include <stdio.h>

int main()
{
    float SI, PA, RT, TM;
    printf("Enter the Principal Amount: ");
    scanf("%f", &PA);

    printf("Enter the Rate: ");
    scanf("%f", &RT);

    printf("Enter the Time (Year): ");
    scanf("%f", &TM);

    SI = (PA * RT * TM) / 100;

    printf("The simple interest is %f.\n", SI);
    return 0;
}
