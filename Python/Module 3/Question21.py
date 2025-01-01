'''
• Write a Python program to check whether an element
exists within atuple.
'''

tup1=(1,4,5,'Hello')
count=0

for element in tup1:
    count+=1
    print(element)
    
if count>0:
    print("There are ",count,"elements inside this tuple")
else:
    print("There are no elements inside this tuple")    