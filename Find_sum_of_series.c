#include<stdio.h>
int main()
{
float i, n, p = 0;
scanf ("%f",&n);
for( i=1;i<=n;i++)
{
   p+= 1/i ;
}
printf("%.2f",p);
}