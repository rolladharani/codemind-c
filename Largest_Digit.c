#include<stdio.h>
int main()
{
    int n,r,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(i<r)
        {
            i=r;
        }
        n=n/10;
    }
        printf("%d",i);
    
}