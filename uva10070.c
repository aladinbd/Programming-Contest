#include<stdio.h>
#include<string.h>
int main(void)
{
    char y[100001];
    int a4,a100,a400,a15,a55,i,l,count=0;
    while (scanf("%s",&y)==1)
    {
        a4=0;
        a100=0;
        a15=0;
        a55=0;
        a400=0;
        if (count>0)
            printf("\n");
        count++;
        l=strlen(y);
        for (i=0;i<l;i++)
        {
            a4=(a4*10+y[i]-'0')%4;
            a55=(a55*10+y[i]-'0')%55;
            a15=(a15*10+y[i]-'0')%15;
            a100=(a100*10+y[i]-'0')%100;
            a400=(a400*10+y[i]-'0')%400;
        }
        if ((!a4 && a100) || !a400)
        {
            printf("This is leap year.\n");
            if (!a15)
                printf("This is huluculu festival year.\n");
            if (!a55)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if (!a15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}