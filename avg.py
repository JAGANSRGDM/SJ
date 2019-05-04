#Python Program to Calculate the Average of Numbers in a Given List

a=[]
#j=0
n=int(input("no. of elements in the list:"))

for i in range(0,n):
	b=int(input("enter the value:"))
	a.append(b)
print(a)

avg = sum(a)/n

print("the average value is:",round(avg,2))			#round(variable,no.of positions)		it takes 2 places after the point
