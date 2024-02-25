#include<stdio.h>
int main()
    {
        int n,sum,avg;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            avg=(sum/n);
        }
         int c=0;
         for(i=0;i<n;i++)
         {
         if(a[i]>=avg)
         {
             c+=1;
         }
         }
         printf("%d ",c);
        
    }