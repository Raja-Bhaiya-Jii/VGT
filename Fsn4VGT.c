// Programe for swap values with apply function.

#include<stdio.h>
int swap (int *, int *);
int main()
{
    int x,y;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("\nValue of X:%d",x);
    printf("\nValue of Y:%d",y);
    return 0;
}
int swap (int *a, int *b)
{
    
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    return *a,*b;
}
