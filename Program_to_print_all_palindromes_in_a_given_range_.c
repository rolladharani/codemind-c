#include<stdio.h>
int main()
{
    int a,b,r,rev=0,t,i;
    scanf("%d
%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        rev=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
}