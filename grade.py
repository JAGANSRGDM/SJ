#Python Program to Take in the Marks of 5 Subjects and Display the Grade.

a=[]

for i in range(0,5):
	b=int(input("enter the marks"))
	a.append(b)
print(a)
percentage=sum(a)/5

if(percentage >= 65):
	print("secures grade A")

elif(65 > percentage >= 50):
	print("secures grade B")

elif(50 > percentage >= 35):
	print("secures grade C")

else:
	print("fail")

