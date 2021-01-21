void main()
{
     int  i,j,n,k;

     printf("enter the no of rows");
     scanf("%d",&n);
     printf("\n");
    for(i=5;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");

    }

}
