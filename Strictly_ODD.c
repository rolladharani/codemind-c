#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            if(i%2==1)
            {
            f=1;
            }
            else
            {
            f=0;
            }
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
          printf("False");
    }

}