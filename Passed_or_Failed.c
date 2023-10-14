#include<stdio.h>
int main()
{
    int Eng,math,phy,che,cs;
    scanf("%d%d%d%d%d",&Eng,&math,&phy,&che,&cs);
    if (Eng>34 && math>34 && phy>34 && che>34 && cs>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}