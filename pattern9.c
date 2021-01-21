#include<stdio.h>

int main(void) {
    int n,i,j,k;
    printf("enter the no of rows");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
          printf("* ");
        for(k=0;k<2*(n/2-i);k++)
            printf("  ");
        for(j=1;j<=i;j++)
          printf("* ");
        printf("\n");
    }

    for(i=n/2+1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("* ");
       for(k=0;k<2*(i-((n/2)+1));k++)
            printf("  ");
        for(j=i;j<=n;j++)
           printf("* ");
        printf("\n");
    }

}
