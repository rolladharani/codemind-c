#include<stdio.h>
int main()
{
    int i,x,y,s,c;
    scanf("%d%d",&x,&y);
    for(i=x+1;i<y;i++)
    {
        s=i*i;
        c=i*i*i;
        printf("%d %d %d
",i,s,c);
    }
}