import array

a=[]							#array
n=int(input("Enter number of elements:"))		#length of the array
for i in range(1,n+1):
    b=input("Enter element:")				#varaiable to take one by one array values
    a.append(b)						#that values added to array a		"append" function is used to add elements
a.sort()						# sort is used to arrange the elements in ascending order
print(a)

a.sort(reverse=True)					#reverse key in sort used to arrange the elements in reverse/descending order
print(a)
