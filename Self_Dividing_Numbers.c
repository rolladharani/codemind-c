#include<stdio.h>
int main()
{
    int a,b,i,f=0,t,r;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        t=i;
    while(t!=0)
    {
        r=t%10;
        if(r==0 || i%r!=0)
        {
            f=1;
        }
        t=t/10;
    }
    if(f==0)
    {
        printf("%d ",i);
    }
    }
    
}