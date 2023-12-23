#include<stdio.h>
int main()
{
    int i,j,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=x;j>=i;j--)
        {
            printf("%d ",i);
        }
    printf("
");
    }
}
