// Programe for show smaller among three number.

#include <stdio.h>

int main()
{
int a,b,c,d;
printf("Enter value a: ");
scanf("%d", &a);

printf("Enter value b: ");
scanf("%d", &b);

printf("Enter value c: ");
scanf("%d", &c);

d=(a<b && a<c)?a:(b<c)?b:c;    
printf("The smaller value of these three numbers is %d.",d);
    return 0;
}
