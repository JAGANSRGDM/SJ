#Python Program to Read Two Numbers and Print Their Quotient and Remainder

divisor=int(input("enter the divisor value"))
dividend=int(input("enter the dividend value"))

quotient = dividend // divisor

remainder = dividend % divisor

print("quotient is :{0}, remainder is :{1}". 
      format(quotient,remainder)) 
