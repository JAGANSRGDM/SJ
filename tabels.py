#Python Program to Print all Numbers in a Range Divisible by a Given Number

lower = int(input("enter the lower limit"))
upper = int(input("enter the upper limit"))


j = int(input("enter the divisible value"))

for i in range(lower,upper+1):
	k = i//j
	if(i%j == 0):
		print(j,k,sep='*',end='=')
		print(i)

#for i in range(1,upper+1):
#	s= j * i
#	print(j,i,sep='*',end='=')
#	print(s)
	
