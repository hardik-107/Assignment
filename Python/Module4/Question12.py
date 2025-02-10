'''
• Write a Python class named Rectangle constructed by a length
and widthand a method which will compute the area of a
rectangle
'''

class rectangle:
    
    def get_data(self,len,width):
        self.len=len
        self.width=width
    
    def area(len,width):
        print("Area of the rectangle is:",len*width)
        
a=int(input("Enter length:"))
b=int(input("Enter width:"))

r1=rectangle

r1.area(a,b)
           