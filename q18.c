#include<stdio.h>
void main()
{
    int n,i,min,max;
    int a[n];
    printf("enter the no.of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("maximum number is %d  \n minimum number is %d",max,min);
}
