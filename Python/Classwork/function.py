def add(x,y):
    print("Addition",x+y)
def sub(x,y):
    print("Subtraction",x-y)
def div(x,y):
    print("Division",x/y)
def mul(x,y):
    print("Multiplication:",x*y)
c=int(input("1.Addition   2.Subtraction   3.Division    4.Multiplication"))
    
a=int(input("Enter a:"))
b=int(input("Enter b:"))

if c==1:
    add(a,b)
elif c==2:
    sub(a,b)
elif c==3:
    div(a,b)
elif c==4:
    mul(a,b)
else:
    print("Invalid Input")                            
        