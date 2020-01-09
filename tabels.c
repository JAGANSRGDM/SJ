#include<stdio.h>

void main()
{
	int i,lower,upper,j,product;
	printf("enter the range and divisible value: ");
	scanf("%d %d %d",&lower,&upper,&j);
	for(i=lower;i<=upper;i++)
	{
		product = i/j;
		if(i%j == 0)
			printf("%d*%d=%d \n",j,product,i);
		/*product = j * i;		
		printf("%d*%d=%d \n",j,i,product);*/
	}
}
