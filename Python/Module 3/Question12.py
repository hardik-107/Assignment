'''
• Write a Python function that takes a list and returns a new list
with unique elements of the first list.

'''

n=int(input("Enter length:"))
list1=[]

for i in range (n):
     element=int(input("Enter element:"))
     list1.append(element)
     
print(list1)     

unique=print(set(list1))