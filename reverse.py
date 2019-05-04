#Python Program to Reverse a Given Number

n=int(input("enter the value:"))
r=0
while(n>0):
	j=n%10;
	r=r*10+j;
	n //= 10;


print("after reversing the num is: ",r)


