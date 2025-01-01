'''
• Write a Python program to check a list is empty or not.


'''

list1=[1,2,3,4,5,6,7]
list2=[]

count=0
for i in list1:
    count+=1
    
print(count)    

if count==0:
    print("List is empty")
else:
    print("List has elements")