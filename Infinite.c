#include<stdio.h>
int main()
{
    int i, n;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n!=-1)
        printf("%d
",n*n);
        else
        break;
    }
}
   