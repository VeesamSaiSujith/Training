// You are using GCC
#include<stdio.h>
int main()
{
    int a,n,b;
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++)
    {
       if(i%2!=0)
       {
           for(int j=0;j<n;j++)
           {
               printf("%d",a);
               b=a;
               a--;
           }
           printf("\n");
       }
       a=b+1;
       if(i%2==0)
       {
           for(int j=0;j<n;j++)
           {
               printf("%d",a);
               a++;
           }
           printf("\n");
       }
       
    }
    return 0;
}