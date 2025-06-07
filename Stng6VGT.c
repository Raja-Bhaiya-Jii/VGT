// Programe for print first letter capital of word in line by include userdefine library.

#include <stdio.h>
#include <string.h>
#include "build.h"
//void CapitalFstr(char n[]);
//void CapitalFstr(char *);
int main()
{
    char nm[100];
    int i;

    printf("Name: ");
    gets(nm);
    CapitalFstr(nm);
    printf("%s", nm);
    return 0;
}


                     // Type 2 by apply userdefine function with array.



//void CapitalFstr(char n[])
//{
//    int i;
//    for (i = 0; n[i] != '\0'; i++)
//    {
//        if (n[i] == 32)
//        {
//            if ( n[i + 1] >= 97 &&  n[i + 1] <= 122)
//            {
//               n[i + 1] = n[i + 1] - 32;
//            }
//        } 
//    }
//}



                     // Type 3 by apply userdefine function with pointer.



//void CapitalFstr(char *n)
//{
//    int i;
//    for (i = 0; *(n+i) != '\0'; i++)
//    {
//        if (*(n+i) == 32)
//        {
//            if ( *(n+i+1) >= 97 &&  *(n+i+1) <= 122)
//            {
//               *(n+i+1) = *(n+i+1) - 32;
//            }
//        } 
//    }
//}