#include<stdio.h>
int main()
{
    int v,b,n,m;
    scanf("%d%d%d%d",&v,&b,&n,&m);
    if(v>=10 && b>=10 && n>=10 && m>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}