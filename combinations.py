#Python Program to Accept Three Digits and Print all Possible Combinations from the Digits

a=[]
n=int(input("enter the range of array"))

for i in range(1,n+1):
	b=int(input("enter the range of value"))
	a.append(b)
print(a)

for i in range(0,n):
	for j in range(0,n):
		for k in range(0,n):
			if(i!=j&j!=k&k!=i):
				print(a[i],a[j],a[k])
