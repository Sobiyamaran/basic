#include<stdio.h>
void main()
{
    int i,n,temp,last;
    int a[i];
    printf("enter the no.of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    last=n-1;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[last];
        a[last]=a[i];
        last--;
    }
    printf("after swapping :%d",a[i]);
}
