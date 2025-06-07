// Programe for print small string  by include userdefine library.

#include<stdio.h>
#include<string.h>
#include "build.h"
//void smlstr(char n[]);
//void smlstr(char *);
int main()
{
    char nm[100];
    int i;

    printf("Name: ");
    gets(nm);
    Smallstr(nm);
    //smlstr(nm);
    printf("%s",nm);
    return 0;
}

                       // Type 2 by apply userdefine function with array.


//void smlstr(char n[])
//{
//    int i;
//    for ( i = 0; n[i] != '\0'; i++)
//    {
//        if(n[i] >= 65 && n[i] <= 90)
//        {
//            n[i] = n[i] + 32;
//        }
//    }
//    
//}

                    // Type 3 by apply userdefine function with pointer.


//void smlstr(char *p)
//{
//    int i;
//    for ( i = 0; *(p+i) != '\0'; i++)
//    {
//        if(*(p+i) >= 65 && *(p+i) <= 90)
//               {
//                    *(p+i) = *(p+i) + 32;
//               }
//    }
//    
//}