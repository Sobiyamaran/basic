#include<stdio.h>
void main()
{
     int  i,j,n,k,l,m;

     printf("enter the no of rows");
     scanf("%d",&n);
     printf("\n");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf(" %c",64+j);
        }
        k=--j;
        for(l=1;l<=i-1;l++)
        {
            j=j-1;
            printf(" %c",64+j);
            }
        printf("\n");

    }

}
