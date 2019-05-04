#Python Program to Exchange the Values of Two Numbers Without Using a Temporary Variable

x= int(input("enter the 1st value"))
y= int(input("enter the 2nd value"))

x=x+y
y=x-y
x=x-y

print("the value of x is:",x, "the value of y is:",y)

