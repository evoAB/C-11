#include <stdio.h>
#include <stdlib.h>
int sq(int);
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Square : %d",sq(a));
    return 0;
}
int sq(int n)
{
    return n*n;
}
