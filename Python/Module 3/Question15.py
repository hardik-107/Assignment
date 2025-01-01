'''
• Write a Python program to find the second smallest
number in a list.Write a Python program to get unique
values from a list

'''
list1=[1,2,3,4,5,5,6,6,8,9]

print(set(list1))

if list1[0]<list1[1]:
    if list1[1]<list1[2]:
        print("The second smallest number is:",list1[1])