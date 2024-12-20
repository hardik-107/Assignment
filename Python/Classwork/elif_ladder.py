"""
WAP to input detail of student and calculate average
"""
name=input("Enter Student name:")
s_id=int(input("Enter Student id:"))
eng=int (input("Enter your marks in English:"))
mat=int(input("Enter your marks in maths:"))
sci=int(input("Enter your marks in Science:"))
hin=int(input("Enter your marks in Hindi :"))
ss=int(input("Enter your mark in Social Studies:"))
print("-"*20)
tot=eng+mat+sci+hindi+ss
print("-"*20)

print("Your average is :",tot)

per=(tot/500)*100
print("-"*20)

if per>=70:
    print("Your Grade is A+")
elif per>=60:
    print("Your Grade is A")
elif per>=50:
    print("Your Grade is B")
elif per>=40:
    print("Your Grade iss C")
else:
    print("Your are not eligible")
    
