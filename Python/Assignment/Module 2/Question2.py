'''
• Write a Python program to get the Factorial number of given
number.
'''
a=int(input("Enter the number :"))
f=1
i=1

while i<=a:
    
    f*=i
    i+=1
  
print("The factorial of ",a,"i",f)