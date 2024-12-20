'''
• Write a python program to sum of the first n positive integers
'''

n=int(input("Enter the limit:"))
i=0
count=0
while i<=n:
    
    print(i)
    i+=1
    count+=1
    
print("The sum of n integers is:",n*(n+1)/2)    