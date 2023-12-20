// You are using GCC
#include<stdio.h>
int main()
{
    int n,a=1,b=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",a);
            a=a+i;
        }
        printf("\n");
        b=b+10;
        a=b;
    }
}