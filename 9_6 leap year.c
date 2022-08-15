#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c,d;
    printf("enter the year");
    scanf("%d",&d);

    switch(d%100==0)
    {
    case 1:
        switch(d%4==0)
        {   printf("leap year");
            break;
        case 0:
            printf("not a leap year");
            break;
        }break;
    case 0:
        switch(d%4==0)
        {
        case 0:
            printf("not a leap year");
            break;
        case 1:
            printf("leap year");
        }break;
    }
    return 0;
}
    