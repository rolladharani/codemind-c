#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float d;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        d=sqrt(i);
        sum=sum+d;
    }
    printf("%.2f",sum);
}