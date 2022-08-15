#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch(a>=1)
    {
    case 1:
        printf("%d",-1*a);
        break;
        case 0:       
        printf("%d",-1*a);
        break;
    }
    return 0;
}