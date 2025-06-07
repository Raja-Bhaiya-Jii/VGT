// Programe for show input total days retaled to 'Leap year OR Not'.  

#include <stdio.h>

int main()
{
    int a;

    printf("Enter days of the year: ");
    scanf("%d", &a);

    if (a>366)
    {
        printf("Please enter applicable number.");
    }
    else if (a>365)
    {
        printf("This is leap year.");
    }
    else
    {
        printf("This is not a leap year.");
    }
    
    return 0;
}
