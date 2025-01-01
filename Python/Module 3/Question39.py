'''
Write a Python program to find the highest 3 values in a
dictionary
'''

data = {'a': 100, 'b': 200, 'c': 300}


highest_three = sorted(data.values(),reverse=True)


print("The highest 3 values are:", highest_three)