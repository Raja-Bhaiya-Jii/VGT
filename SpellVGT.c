// Programe for show number of character number, which multiple in input.

#include <stdio.h>
#include<string.h>
#include "build.h"
int main()
{
    int i, j, k,n,s;
    char a[100];
    printf("Enter word: ");
    gets(a);
    n = lengthstr(a);
    
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = i + 1; j < n; j++)
        {
            
            if (a[i] == a[j] || a[i] == a[j]+32 || a[i] == a[j]-32)
            {
                k++;
            }
        }
        if (k != 0)
        {
            s=k;
            printf("\n%c is %d", a[i], k + 1);
        }
        
    }
    
    return 0;
}
