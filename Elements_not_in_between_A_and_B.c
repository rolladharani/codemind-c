#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,l,c=0;
    scanf("%d%d",&m,&l);
    for(i=0;i<n;i++)
    {
        if(a[i]<m || a[i]>l)
        {
            printf("%d ",a[i]);
            c=1;
        }
    }
    if(c!=1)
    {
        printf("-1");
    }
    
}