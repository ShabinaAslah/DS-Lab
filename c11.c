#include<stdio.h>
#include<stdlib.h>
int  fun(int x,int y)
{
	int c;
	c=x+y;
	return(c);
}
int main()
{
	 int a,b;
	 printf("enter two number:");
	 scanf("%d %d",&a,&b);
	 int r=fun(a,b);
	 printf("sum=%d\n",r);
	 return 0;
}
