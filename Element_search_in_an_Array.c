#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,flag=0;
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}