#include<stdio.h>
int main()
{
    int a,b,x,y,m,n;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    int i,esum=0,f=0;
    for(i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            esum+=i;
        }
    }
    printf("%d",esum);
    
}