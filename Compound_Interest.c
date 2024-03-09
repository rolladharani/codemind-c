#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&r,&t);
    float R=r/100.0;
   float ci= p*(pow(1+R,t))-p;
   printf("%.2f",ci);
}