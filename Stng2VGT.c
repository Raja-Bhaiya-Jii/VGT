// Programe for copy string by include userdefine library.

#include<stdio.h>
#include<string.h>
#include "build.h"
void Copystr (char *, char *);
int main()
{
    char a[100],b[100];
    printf("Enter Word: ");
    gets(a);
    Copystr(a,b);
    puts(b);
    return 0;
} 

                     // Type 1 by apply userdefine function with array. // 

//void Copystr (char a[], char b[])
//{
//    
//    int i=0;
//    while (a[i] != '\0')
//    {
//      b[i] = a[i];
//      i++;
//    }
//    b[i]='\0';
//    
//}
                           
                // Type 2 by apply userdefine function with pointer. //

//void Copystr (char *p, char *k)
//{
//    int i=0;
//    while (*(p+i) != '\0')
//    {
//        *(k+i) = *(p+i);
//        i++;
//    }
//    *(k+i)='\0';
//}