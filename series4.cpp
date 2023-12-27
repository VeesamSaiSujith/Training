#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=4;
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        a=a*3-2;
    }
}