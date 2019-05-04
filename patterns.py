#from __future__ import print_function

n = int(input("enter the size:"))
for i in range(1, n+1):
     for j in range(n+1-i):
         print(" ",end=" ")
     for j in range(1,i):
         print(j,end=" ")
     for i in range(i,0,-1):
         print(i,end=" ")
     print("\n")
