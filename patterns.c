/*
	Write a program to print diamond pattern
		1
	       121
	      12321
like this */

#include <stdio.h>

/*int main()
{
	int n,i,j;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i-1;j>0;j--)
			printf("%d",j);
		printf("\n");
			
	}
}*/

//similarly for stars
int main()
{
	int n,i,j;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=i-1;j>0;j--)
			printf("*");
		printf("\n");
			
	}
}
