#include<stdio.h>
int main()
{
	int i,j,a,b,sum=0,mus=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
	     sum+=i;
    	}
    }
    for(j=1;j<b;j++)
    {
    	if(b%j==0)
    	{
    	mus+=j;
       }
	}
if(sum==b && mus==a)
{
	printf("Amicable");
}
else
{
	printf("Not Amicable");
}
}