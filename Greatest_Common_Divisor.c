#include<stdio.h>
int main()
{
    int a,b,i,lcm,m,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        lcm=i*a;
        if(lcm%b==0)
        {
        m=lcm;
        break;
        }
    }
    gcd=(a*b)/lcm;
    printf("%d",gcd);
}