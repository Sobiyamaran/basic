#include<stdio.h>

void main()
{
     int  i,j,n,k;

     printf("enter the no of rows");
     scanf("%d",&n);
     printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");

    }

}
