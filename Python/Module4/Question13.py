'''
• Write a Python class named Circle constructed by a radius
and twomethods which will compute the area and the
perimeter of a circle
'''
class circle:
    def perimeter(k,radius,pi):
        k=2*pi*radius
        print("The perimeter of the circle is:",k)
    
    def area(l,radius,pi):
        l=pi*radius*radius
        print("The area of circle is: ",l)
        
r=int(input("Enter radius of the circle:"))
p=3.14

c1=circle()

c1.area(r,p)            
c1.perimeter(r,p)