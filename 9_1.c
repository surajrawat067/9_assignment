#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    while(1)
    {
        printf("enter a month number ");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf(" Janurary has 31 days\n ");
            break;
        case 2:
            printf(" February has 29 days\n ");
            break;
        case 3:
            printf(" March has 31 days\n");
            break;
        case 4:
            printf(" April has 30 days \n");
            break;
        case 5:
            printf(" May has 31 days\n ");
            break;
        case 6:
            printf(" June has 30 days \n");
            break;
        case 7:
            printf(" July has 31 days\n ");
            break;
        case 8:
            printf(" August has 31 days\n ");
            break;
        case 9:
            printf(" September has 30 days \n");
            break;
        case 10:
            printf(" October has 31 days\n ");
            break;
        case 11:
            printf(" November has 30 days \n");
            break;
        case 12:
            printf(" December has 31 days\n ");
            default :
            printf("invalid\n");


        }
printf("\n");
    }



    return 0;
}
