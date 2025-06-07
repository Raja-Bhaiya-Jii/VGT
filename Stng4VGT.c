// Programe for print capital string  by include userdefine library.

#include<stdio.h>
#include<string.h>
#include "build.h"
//void uprstr(char n[]);
//void uprstr(char *);
int main()
{
    char nm[100];
    int i;

    printf("Name: ");
    gets(nm);
    Capitalstr(nm);
    //uprstr(nm);
    printf("%s",nm);
    return 0;
}

                       // Type 2 by apply userdefine function with array.


//void uprstr(char n[])
//{
//    int i;
//    for ( i = 0; n[i] != '\0'; i++)
//    {
//        if(n[i] >= 97 && n[i] <= 122)
//        {
//            n[i] = n[i] - 32;
//        }
//    }
//    
//}

                    // Type 3 by apply userdefine function with pointer.


//void uprstr(char *p)
//{
//    int i;
//    for ( i = 0; *(p+i) != '\0'; i++)
//    {
//        if(*(p+i) >= 97 && *(p+i) <= 122)
//               {
//                    *(p+i) = *(p+i) - 32;
//               }
//    }
//    
//}