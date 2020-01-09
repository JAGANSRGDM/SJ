//program to reverse a number
#include<stdio.h>

void main()
{
	int j,k,l=0;
	printf("enter the j value");
	scanf("%d",&j);
	while(j>0)
	{
		k=j%10;
		l=l*10+k;
		j = j/10;
	}
	printf("the reverse num is %d \n",l);
}
