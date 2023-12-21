#include<stdio.h>
int main()
{
    int i,j,n,m,a,b;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
     scanf("%d%d",&a,&b);
     int rra[a][b];
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
        scanf("%d",&rra[i][j]);
        }
    }
    if(m==a && n==b)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]+rra[i][j]);
            }
            printf("
");
        }
    }
}