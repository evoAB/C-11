#include <stdio.h>
#include <stdlib.h>
int factN(int);
int combN(int, int);
void pascal(int);
int main()
{
    int r;
    printf("Enter Range : ");
    scanf("%d",&r);
    pascal(r);
    return 0;
}

int factN(int n)
{
    int x=1;
    for(int i=1; i<=n;i++)
        x*=i;
    return x;
}

int combN(int n, int r)
{
    return factN(n)/(factN(r)*factN(n-r));
}

void pascal(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int j=0;j<=i;j++)
            printf(" %d",combN(i,j));
        printf("\n");
    }
}
