// Programe for print factorial with apply function.

#include<stdio.h>
int Fct( int );
int main()
{
    int a, z;
    printf("Enter Number: ");
    scanf("%d",&a);
    z=Fct(a);
    printf("Factrorial of %d is %d.",a,z);
    return 0;
}
int Fct (int a) 
{
    int i, n, k;
    k = 1;
    
    for ( i = a; i > 0; i--)
    {
        k = k*i;
    }
    return k;
}
