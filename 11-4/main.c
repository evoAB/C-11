#include <stdio.h>
#include <stdlib.h>
int primeNN(int);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Next prime number : %d",primeNN(n));
    return 0;
}
int primeNN(int a)
{
    a++;
    int i,j;
    for(;;)
    {
        i=a;
        for(j=2;j<=a/2;j++)
            if(a%j==0)
                ++a;
        if(i==a)
            return i;
    }
}
