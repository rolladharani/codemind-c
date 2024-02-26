#include<stdio.h>
int main()
{
    int n,i,sum=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        avg=sum/n;
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        c++;
    }
    printf("%d",c);
}