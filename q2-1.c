#include<stdio.h>

void main()
{
     int area,perimeter,a;
     int pi=22/7;
     printf("enter the radius of the circle");
     scanf("%d",&a);
     area=pi*a*a;
     perimeter=2*pi*a;
     printf("area =%d,perimeter=%d",area,perimeter);
}
