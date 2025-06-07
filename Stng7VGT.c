#include<stdio.h>
#include<string.h>
#define Chhap printf
int main()
{
    char cv[100];
    int a=0, e=0, k=0, o=0, u=0;
    Chhap("Enter Line: ");
    gets(cv);
    
    int i;
   for (i = 0; cv[i] != '\0'; i++)
    {
        if (cv[i]== 65 || cv[i]== 97)
        {
            a++;
        }else if (cv[i]== 69 || cv[i]== 101)
        {
            e++;
        }else if (cv[i]== 73 || cv[i]== 105)
        {
            i++;
        }else if (cv[i]== 79 || cv[i]== 111)
        {
            o++;
        }else if (cv[i]== 85 || cv[i]== 117)
        {
            u++;
        }
    }
    Chhap("\na:%d",a);
    Chhap("\ne:%d",e);
    Chhap("\ni:%d",k);
    Chhap("\no:%d",o);
    Chhap("\nu:%d",u);
    return 0;
}
