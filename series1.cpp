// You are using GCC
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    for(int i=0;i<n;i++)
    {
        printf("%d ",sum);
        sum=sum*2+i;
    }
}
