#include <stdio.h>
#include <stdlib.h>
int primeN(int);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(primeN(n))
        printf("It is a Prime numbers");
    else
        printf("It is not a Prime numbers");
    return 0;
}
int primeN(int a)
{
    for(int i=2;i<=a/2;i++)
        if(a%i==0)
            return 0;
    return 1;
}
