
#include<stdio.h>
void main()
{
    int a,b,c,biggest;
    printf("enter the three number");
    scanf("%d %d %d",&a,&b,&c);
    biggest=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("biggest of three num is: %d",biggest);
}

