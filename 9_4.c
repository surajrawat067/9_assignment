#include<stdio.h>
#include<conio.h>
int main()
{
while(1)
   { int a,b,c,x;
    printf("\n 1. Check  isoceles triangle or not   ");
    printf("\n 2. check  it is right angles triangle or not  ");
    printf("\n 3. check it is a right angle triangle or not ");
    printf("\nSelect an option\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter three sides\n");
        scanf("%d %d %d",&a, &b,&c);
        if(a==b)
            printf("it is isosceles triangle");
        if(a!=c && a!=b)
            printf("it is not an isosceles traingle ");
        break;

    case 2:
        printf("enter three sides\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a+b*b==c*c)
            printf("it is a right angle triangle");
        else
            printf("it is not a right angle triangle ");
        break;
    case 3:
        printf("enter three sides\n");
        scanf("%d %d %d",&a, &b,&c);
        if(a==b && b==c)
            printf("it is equailateral triangle");
        else
            printf("it is not an equailateral traingle ");
        break;
    }
    
   printf("\n");
}
}
