temp=int(input("enter the value"))
while(1):
	j=temp
	r=0
	while(temp>0):
		n=temp % 10
		r = r*10+n
		temp //= 10
	#print(r)
	if(r==j):		
		break
	else:
		temp = j+r
	#print(temp)
print(j,"num is palindrome")
