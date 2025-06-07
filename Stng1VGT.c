// Programe for print string length by include userdefine library.

#include <stdio.h>
#include <string.h>
#include "build.h"
#define Chhap printf

int main()
{
    int i;
    char k[100];
    Chhap("Enter Name: ");
    gets(k);

                               // Type 1 by apply predefine function. //

   // i = strlen(k);
    i = lengthstr(k);
    Chhap("%d", i);
    return 0;
}

                         // Type 2 by apply userdefine function with array. //

// int lengthstr(char k[])
//{
// int i = 0;
// while (k[i] != '\0')
//    {
//     i++;
//    }
//     return i;
// }
                        
                     // Type 3 by apply userdefine function with pointer.//
                     
//int lengthstr(char *k)
//{
//    int i=0;
//     while (*(k+i) != '\0')
//     {
//        i++;
//     }
//    return i; 
//}