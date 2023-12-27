#include<stdio.h>
int main()
{
    int n,a,b,s=0,r=0;
    scanf("%d",&n);
    int t=n;
    while(t>0)
    {
        a=t%10;
        s=s+a;
        t=t/10;
    }
    int t1=s;
    while(t1>0)
    {
        b=t1%10;
        r=r*10+b;
        t1=t1/10;
    }
    if(s*r==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}