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
    for(i=n-1;i>1;i--)
    {
        if(a[i]%2==1)
        {
            break;
        }
    }
        printf("%d",i);
}