#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 && 2<n<5)
    {
        printf("not weird");
    }
    else
    {
        printf("weird");
    }
}