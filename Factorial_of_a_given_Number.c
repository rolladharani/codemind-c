#include<stdio.h>
int main()
{
    int n,i,fc=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fc=fc*i;
    }
    printf("%d",fc);
}