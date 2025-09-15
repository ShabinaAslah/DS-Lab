#include<stdio.h>
#include<stdlib.h>
void main()
{
int l,b,a,p;
printf("Enter the Lenght and Breadth of the rectangle");
scanf("%d %d",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area and Perimeter of the Rectangle is:%d %d",a,p);
}
