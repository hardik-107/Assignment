'''
• Write a Python function to calculate the factorial of a
number (anonnegative integer)

'''
n=int(input("Enter the number:"))

def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)


print(factorial(n))
