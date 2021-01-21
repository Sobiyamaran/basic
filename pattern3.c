void main()
{
     int  i,j,n;

     printf("enter the no of rows");
     scanf("%d",&n);
     printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if(i==1||j==1||j==n-i+1)
              printf(" *");
          else
              printf("  ");

        }
        printf("\n");

    }

}
