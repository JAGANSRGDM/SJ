#include <stdio.h>

int add(int b[],int j)
{
	int i;
	float sum=0;
	for(i=0;i<j;i++)
	{
		sum = sum + b[i];
	}
	return sum;
}


void main()
{
	int a[256]={0},i,n;
	float avg,j;
	// extern sum;
	printf("Enter the length of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the a[%d] values",i);
		scanf("%d",&a[i]);
	}
	j = add(a,n);
	printf("%0.2f \n",j);
	avg= j / n;
	printf("the average value of elements is: %0.2f \n",avg);
}
