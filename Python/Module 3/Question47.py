'''
• Write a Python program to calculate surface volume and
area of acylinder
sa=2πr 2+2πrh
v=πr2h
'''
pi=3.14
r=int(input("Enter radius of cyliner:"))
h=int(input("Enter height of the cylinder:"))

v=pi*r*r*h

print("The volume of cylinder is:",v)

sa=2*pi*r*r+2*pi*r*h    

print("The surface area of cylinder is:",sa)
    
        