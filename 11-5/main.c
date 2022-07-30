#include <stdio.h>
#include <stdlib.h>
void primeN(int);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Prime numbers : ");
    primeN(n);
    return 0;
}
void primeN(int a)
{
    int i=1,j,count=0;
    while(count!=a)
    {
        int flag=0;
        for(j=2;j<=i/2;j++)
            if(i%j==0)
            {
                flag=1;
                break;
            }
        if(flag==0)
        {
            printf("%d ",i);
            count++;
        }
        i++;
    }
}
