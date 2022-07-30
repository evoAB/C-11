#include <stdio.h>
#include <stdlib.h>
void fiboN(int);
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    fiboN(l);
    return 0;
}

void fiboN(int n)
{
    printf("Fibonacci Series : ");
    int s1=0, s2=1, s3;
    for(int i=0; i<n;i++)
    {
        s3=s1+s2;
        s1=s2;
        s2=s3;
        printf("%d ",s1);
    }
}
