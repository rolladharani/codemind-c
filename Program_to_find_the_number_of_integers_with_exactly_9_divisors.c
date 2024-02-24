#include<stdio.h>
int main()
{
    int n, i, j, f, d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            f++;
        }
 
        if(f==9)
        {
            d+=1;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",d);
    
}