#include<stdio.h>
void main()
{
   int a,b, temp;
   printf("enter the a value");
   scanf("%d",&a);
   printf("enter the b value");
   scanf("%d",&b);
   a=a^b;
   b=a^b;
   a=a^b;


   printf("after swapping a and b is %d , %d",a,b);

}
