#include<stdio.h>
int main ()
{
    float a,b,c,d;
    printf("enter electricity units");
    scanf("%f",&a);
    switch(a>=51)
    {
    case 0:
        b=a*0.5;
        a=b*0.2;
        c=a+b;
        printf("\n%f",c);
        break;
    case 1:
        switch(a<=150)
        {
        case 1:
            a=a-50;
            b=a*0.75;
            a=b*0.2;
            a=a+b;
            printf("\n%f",a+30);
            break;
        case 0:
           switch(a<=250)
{
case 1:
            a=a-150;
            b=a*1.20;
            a=b*0.2;
            a=a+b;
            printf("\n%f",a+120);
            break;
case 0:
            a=a-250;
            b=a*1.5;
            a=b*0.2;
            a=a+b;
            printf("\n%f",a+264);
            break;


}

        }

    }
        return 0;
}
