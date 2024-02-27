#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,key;
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
          if(key==a[i])
           c++; 
    }
    printf("%d",c);
}