//wap to accept any 10 char arrange them in descending order and ascending order:

#include<stdio.h>

void main()
{
	int a[256];
	int i,j,temp,n;
	printf("Enter the value of N\n");
        scanf("%d", &n);	

	for(i=0;i<n;i++)
	{
		printf("enter a[%d] value:",i);
		scanf("%d",&a[i]);
	}
	
	for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (a[i] < a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
	
	printf("The numbers arranged in descending order are given below\n");
	for (i = 0; i < n; ++i) 
	{
	    printf("%d\n", a[i]);
	}

	for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (a[i] > a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
	
	printf("The numbers arranged in ascending order are given below\n");
	for (i = 0; i < n; ++i) 
	{
	    printf("%d\n", a[i]);
	}		
}
