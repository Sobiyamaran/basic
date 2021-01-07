#include<stdio.h>

void main()
{
     float area,perimeter;
     int a;
     float pi=3.14;
     printf("enter the radius of the circle");
     scanf("%d",&a);
     area=pi*a*a;
     perimeter=2*pi*a;
     printf("area =%d,perimeter=%d",area,perimeter);
}
