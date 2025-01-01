'''
• Write a Python program to calculate the area of a trapezoid
'''

class trapezoid:
    
    def get_breaths(self,b1,b2):
        self.b1=b1
        self.b2=b2
        

t=trapezoid()
b1=int(input("Enter breath1:"))
b2=int(input("Enter breath2:"))

k=b1+b2

t.get_breaths(b1,b2)
h=int(input("Enter height:"))

area=k*h
final=area/2
print("Area of the trapezoid is:",final)