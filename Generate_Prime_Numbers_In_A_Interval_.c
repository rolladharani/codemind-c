#include<stdio.h>
int main()
{
    int a, b, i, j, f;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            f++;
        }
 
        if(f==2)
        {
            printf("%d
",i);
        }
    }
}