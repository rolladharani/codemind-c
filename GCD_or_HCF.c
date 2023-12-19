#include<stdio.h>
int main()
{
    int n, m,l,g,d ,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        l=i*m;
        if(l%n==0)
        {
           d=l;
           break;
        }
    }
    g=(m*n)/d;
    printf("%d",g);
    
}