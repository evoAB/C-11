#include <stdio.h>
#include <stdlib.h>
int lcm(int, int);
int main()
{
    int m,n;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);
    printf("LCM of two numbers : %d",lcm(m,n));
    return 0;
}
int lcm(int a, int b)
{
    int n=a>b?a:b;
    for(int i=n;;i++)
        if(i%a==0 && i%b==0)
            return i;
}
