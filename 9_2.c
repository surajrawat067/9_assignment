#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a,b, c,d,e,x;
       printf("\na. addition");
        printf("\nb. subtraction");
        printf("\nc. multiplication");
        printf("\nd. divison");
        printf("\ne. exit");
        printf("\n");
        printf("select the options");
        printf("\n");
        scanf("%c",&x);

        switch (x)
        {
        case 'a':
            printf("\nenter two number\n");
            scanf("%d %d",&a,&b);
            printf("Answer is %d",a+b);
            break;
        case 'b':
            printf("\nenter two number\n");
            scanf("%d %d",&a,&b);
            printf("Answer is %d",a-b);
            break;
        case 'c':
            printf("\nenter two number\n");
            scanf("%d %d",&a,&b);
            printf("Answer is %d",a*b);
            break;
        case 'e':
            exit(0);
            break;

        case 'd':
            printf("enter two number\n");
            scanf("%d %d",&a,&b);
            printf("Answeris %d",a/b);
            break;

        default :
            printf("invalid character ");


        }

        printf("\n");

        return 0;


    }