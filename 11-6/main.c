#include <stdio.h>
#include <stdlib.h>
void primeNR(int, int);
int main()
{
    int m,n;
    printf("Enter Range : ");
    scanf("%d%d",&m,&n);
    printf("Prime numbers : ");
    primeNR(m,n);
    return 0;
}
void primeNR(int a,int b)
{
    a++;
    for(int i=a;i<b;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("%d ",i);
    }
}
