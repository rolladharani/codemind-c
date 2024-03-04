#include<stdio.h>
int main()
{
float bs,hra,da;
scanf("%f%f%f",&bs,&hra,&da);
float ps=bs*(12/100.0);
float gs=bs+hra+da+ps;
printf("%.2f
",ps);
printf("%.2f",gs);

}