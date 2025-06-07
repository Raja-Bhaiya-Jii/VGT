// Programe for addition of two integers with apply function.

# include<stdio.h>
void sum (int, int);

int main()
{
    int x,y;
    printf("Enter the value of X & Y: ");
    scanf("%d%d",&x,&y);
    sum(x,y); // Here we are passing the value of x & y.
    printf("\n main function:\n");
    
    return 0;
}
void sum (int a, int b)
{
    int z;
    z=a+b;
    printf("Ans = %d",z);
}
