#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int p[t],ti[t],r[t];
    int si;
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&p[i],&ti[i],&r[i]);
    }
    for(int i=0;i<t;i++)
    {
        si=(p[i]*ti[i]*r[i])/100;
        printf("%d\n",si);
    }
    return 0;
}