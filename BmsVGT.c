// Programe for 'Basic Marksite'.

#include <stdio.h>
int main()
{
    int age;
    float Percent;

    printf("Enter Your Roll Number = ");
    scanf("%d", &age);

    switch (age)
    {
    case 12:
        printf("Hi Jay, Thank You for giving your valuable time.\n\n");
        printf(" Enter Your Percentage = ");
        scanf("%f", &Percent);

        if (Percent >= 75)
        {
            printf("You got First Division.");
        }

        else if (Percent >= 50)
        {
            printf("You got Second Division.");
        }

        else if (Percent >= 33)
        {
            printf("You got Third Division.");
        }

        else if (Percent < 33)
        {
            printf("You are Fail.");
        }

        else
        {
            printf("Please enter a valid digit.");
        }

        break;
    case 11:
        printf("Pranam, Thank You for giving your valuable time. \n");
        break;

    default:
        printf("Invalid Roll Number, Please Enter valid Roll Number.\n");
        break;
    }

    return 0;
}