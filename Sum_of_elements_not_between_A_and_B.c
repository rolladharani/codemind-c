#include<stdio.h>
int main()
{
    int i,p;
    scanf("%d",&p);
    int a[p];
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<p;i++)
    { 
        if(a[i]<m || a[i]>n)
        sum=sum+a[i];
    }
    printf("%d",sum);
}