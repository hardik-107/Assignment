'''
Write a Python program to sum of three given integers.
However, if two values are equal sum will be zero.
'''
a=int(input("Enter Integer 1:"))
b=int(input("Enter Integer 2:"))
c=int(input("Enter Integer 3:"))

if(a==b or b==c or c==a):
    print("0")
else:
    print("The sum is :",a+b+c)    