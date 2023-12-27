#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=6;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",s);
        s=s*2+i;
    }
}