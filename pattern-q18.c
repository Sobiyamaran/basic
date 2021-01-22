#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("enter n and m");
    scanf("%d %d",&n,&m);
     printf("\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==m||j==n||i==1||j==1)
                printf("* ");
            else if(i==m-1||j==n-1||j==2||i==2)
                printf("0 ");
            else
                printf("* ");

            }
        printf("\n");
    }
}
