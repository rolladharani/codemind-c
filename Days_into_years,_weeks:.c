#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d= n/365;
    int w=(n%365)/7;
    printf("%d
%d",d,w);
}