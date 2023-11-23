#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m<150)
    {
        printf("The person is Dwarf.");
    }
    else if(m>150 && m<=165)
    {
        printf("The person is average heighted.");
    }
    else if(m>165 && m<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}