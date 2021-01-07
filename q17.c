#include<stdio.h>
void main()
{
    int n,i,sum=0,average;
    int a[n];
    printf("enter the num of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        sum+=a[i];
    }
    average=sum/n;
    printf("sum is %d , average is %d",sum,average);


}

