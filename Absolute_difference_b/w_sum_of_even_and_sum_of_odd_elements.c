#include<stdio.h>
int main()
{
    int i,n,esum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        esum=esum+arr[i];
    }
    int osum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        osum=osum+arr[i];
    }
    if(esum>osum)
    {
        printf("%d",esum-osum);
    }
    else
    {
        printf("%d",osum-esum);
    }
}