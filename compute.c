// write a Program to Read a Number n and Compute n+nn+nnn

#include<stdio.h>

void main()
{
	int j,comp,s;
	//char s,m,y;
	printf("enter the j value");
	scanf("%d",&j);
	s = j*100 + j;
	
	if(j<10)
	{
		comp=j + j*11 +j *111;
	}
	else
	{
		comp = j+ s + (j*10000 + s);
	}	
	printf("after coputation the valuse is %d \n",comp);
}



