// You are using GC
#include<stdio.h>
int main()
{
    float n1,n2,rp;
    scanf("%f%f",&n1,&n2);
    rp=((n2-n1)*100)/n1;
    printf("%.2f",rp);
    return 0;
}