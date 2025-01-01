'''
• Write a Python program to find the repeated items of a tuple.
'''
tup1=(1,2,3,5,6,2,4)

for i in tup1:
    tup1.count(i)
    if tup1.count(i)>1:
        print(f"The repeated element is {i}")
        print(tup1.index(i))
