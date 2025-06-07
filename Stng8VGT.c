#include<stdio.h>
int cmpstr (char *, char *);
int main()
{
    char nm[100], sn[100];
    int n;
    printf("Enter 1: ");
    gets(nm);
    printf("Enter 2: ");
    gets(sn);
    n = cmpstr(nm,sn);
    printf("\nN:%d",n);
    return 0;
}
//int cmpstr (char *p, char *t)
//{
//    int n;
//    while(*p != '\0' || *t != '\0')
//    {
//        n = *p - *t;
//        if (n != 0)
//        {
//            break;
//        }
//        p++;
//        t++;
//        
//    }
//    return n;
//}
int cmpstr (char *p, char *t)
{
    int n;
    while(*p != '\0' || *t != '\0')
    {
        n = *p - *t;
        if (n != 0 && n != 32 && n != -32)
        {
            break;
        }
        p++;
        t++;
        if (n == -32 || n == 32)
        {
            n=0;
        }
        
    }
    return n;
}