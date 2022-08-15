#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch(a%2==0)
    {
    case 1:
    printf("%d",a+1);
    break;
    case 0:
    printf("%d",a);
    break;
    }
    return 0;
}