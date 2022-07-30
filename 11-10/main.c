#include <stdio.h>
#include <stdlib.h>
int sos(int);
int fact(int);
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Sum of series of number : %d",sos(a));
    return 0;
}
int sos(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
        sum += fact(i)/i;
    return sum;

}

int fact(int n)
{
    int m=1;
    for(int i=1; i<=n; i++)
        m*=i;
    return m;
}
