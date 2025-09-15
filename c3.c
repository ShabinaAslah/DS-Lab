#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,t;
printf("enter the 2 no:");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("After swapping:a=%d,b=%d",a,b);
}
