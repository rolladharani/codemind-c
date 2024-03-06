#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h=n/3600;
    int m=(n%3600)/60;
    int sec=n%60;
    printf("H:M:S-%d:%d:%d",h,m,sec);
    
}