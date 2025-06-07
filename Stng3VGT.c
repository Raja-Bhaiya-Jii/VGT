// Programe for print reverse string by include userdefine library.

#include<stdio.h>
#include<string.h>
#include "build.h"
void Reversestr (char *,char *,int );
int main()
{
   char n[100], m[100];
   int k;
   printf("Enter Word: ");
   gets(n);
   k=strlen(n);
   Reversestr(n,m,k);
   puts(m); 
    return 0;
}
                        // Type 1 by apply userdefine function with array.//

//void Reversestr (char n[], char m[],int k)
//{
//  int i,j=0;
//  i = k-1 ;
//    while (n[i] > 0)
//   {
//    m[j]=n[i];
//    i--;
//    j++;
//   }
//   m[j-1]='\0';
//   
//}

                   // Type 2 by apply userdefine function with pointer.//

// void Reversestr (char *p1, char *p2, int k)
// {
//     int i, j=0;
//     i = k-1;
//     while (*(p1+i) > 0)
//     {
//         *(p2+j) = *(p1+i);
//         i--;
//         j++;
//     }
//     *(p2+j-1) = '\0';
// }