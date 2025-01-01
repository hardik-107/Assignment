'''
• Write a Python program to generate and print a list of first
and last 5 elements where the values are square of
numbers between 1 and 30

'''

s=[n**2  for n in range(1,31)]

first_five=s[:5]
last_five=s[::-5]

print("First five elements are:",first_five)
print("Last five elements are:",last_five)