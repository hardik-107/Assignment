'''
• Write a Python program to print all unique values in a dictionary.
'''
my_dict = {'a': 100, 'b': 200, 'c': 300, 'd': 100, 'e': 200}

result=set(my_dict.values())

print("unique values are:",result)