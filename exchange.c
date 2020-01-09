//wap Program to Exchange the Values of Two Numbers Without Using a Temporary Variable

#include<stdio.h>

void main()
{
	int x,y;
	printf("enter x and y values:");
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after exchange value of x is %d and value of y is %d ",x,y);
}
