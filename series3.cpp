#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=2,b=6,c=11;
    for(int i=0;i<n;i++)
    {
        if(i%3==0)
        {
            printf("%d ",a);
            a=a+8;
        }
        else if(i%3==1)
        {
            printf("%d ",b);
            b=b+9;
        }
        else
        {
            printf("%d ",c);
            c=c+10;
        }
    }
    return 0;
}