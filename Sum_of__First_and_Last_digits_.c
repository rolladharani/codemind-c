#include<stdio.h>
int main()
{
    int i,n,r,s;
    scanf("%d",&n);
    s=n%10;
    while(n>0)
    {
        r=n%10;
        n=n/10;
    }
    s+=r;
    printf("%d",s);
    
    
}