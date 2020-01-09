#include<stdio.h>

void main()
{
	int divisor,dividend,quotient,remainder;
	printf("Enter the divisor and dividend  value");
	scanf("%d %d",&divisor,&dividend);
	quotient = dividend/divisor;
	remainder = dividend%divisor;
	printf("the quotient is %d \n remainder is %d \n",quotient,remainder);
}
