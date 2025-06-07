#include <stdio.h>

int main()
{
    int a;

    printf("Enter the year: ");
    scanf("%d", &a);

   if (2025<=a)
   {
    printf("The Prime Minister is \"Narendra Modi\".\n");
   }else if (2014<=a)
   {
    printf("The Prime Minister was \"Narendra Modi\".\n");
   }else if (2004<=a)
   {
    printf("The Prime Minister was \"Dr. Manmohan Singh\".");
   }else if (1999<=a)
   {
    printf("The Prime Minister was \"Atal Bihari Vajpeyi\".");
   } else
   {
    printf("Enter the year between 1999 AD to 2025 AD.");
   }
   
   
   
   
   

    return 0;
}
