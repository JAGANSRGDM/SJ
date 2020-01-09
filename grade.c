#include<stdio.h>

void main()
{
	int a[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		printf("enter the a[%d] value: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum = sum+a[i];
	}
	avg = sum/5;	
	printf("the avg is %f \n",avg);
	
	if(avg >= 65)
		printf("secures grade A \n");
	else if(65>avg && avg >= 50)
		printf("secures grade B \n");
	else if(50>avg && avg >= 35)
		printf("secures grade C \n");
	else
		printf("FAILED \n");
}
