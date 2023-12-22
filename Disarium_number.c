#include<stdio.h>
#include<math.h>
int dcount(int);
int main()
{
    int n,p,f=0,s,t;
    scanf("%d",&n);
    s=n;
    t=n;
    int e=dcount(n);
    while(t!=0)
    {
        p=t%10;
        f=f+pow(p,e);
        t=t/10;
        e--;
    }
    if(s==f)
    printf("True");
    else
    printf("False");
}
int dcount(int n)

{
    int r,dc=0;
    while(n!=0)
    {
        r=n%10;
        dc+=1;
        n=n/10;
    }
    return dc;
}