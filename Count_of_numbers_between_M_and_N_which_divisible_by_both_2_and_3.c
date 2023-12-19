#include<stdio.h>
int main()
{
    int n, i,m, dc=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%6==0) 
        {
        dc+=1;
        }
    }
    printf ("%d",dc);
}