#include <stdio.h>
#include <stdlib.h>
int hcf(int, int);
int main()
{
    int m,n;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);
    printf("HCF of two numbers : %d",hcf(m,n));
    return 0;
}
int hcf(int a, int b)
{
    int y;
    int n=a<b?a:b;
    for(int i=1;i<n;i++)
        if(a%i==0 && b%i==0)
            y=i;
    return y;
}
