#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c+=1;
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}