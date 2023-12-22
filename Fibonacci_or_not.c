#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    scanf("%d",&n);
    while(a<n)
    {
        c=a;
        a=b;
        b=c+b;
    }
    if(a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}