#include<stdio.h>
int main()
{
int i,n,sum=0,f=0;
float avg;
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++)
{
scanf("%d", &arr[i]);
sum=sum+arr[i];
}
avg=(float)sum/n;
for(i=0;i<n;i++)
{
if(arr[i]==(int)avg)
{
    f=1;
    break;
}
}
if(f==1)
{
printf("True");
}
else
{
printf("False");
}
}
