#include<stdio.h>

int main(void) {
    int n,i,j,k;
    printf("enter the no of rows");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n/2;i++)
    {
        for(j=n/2;j>i;j--)
            printf("  ");
        for(k=1;k<=i;k++)
            printf("*   ");
        printf("\n");
    }
    for(i=n/2+1;i<n;i++)
    {
        for(j=n/2+1;j<=i;j++)
            printf("  ");
        for(k=i;k<n;k++)
            printf("*   ");
        printf("\n");
    }

}
