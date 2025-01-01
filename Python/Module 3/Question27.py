'''
• Write a Python program to remove an empty tuple(s) from a list
of tuples.
'''
l=[(1,2),(),(3,4),()]

filtered_list = [i for i in l if i]

print(filtered_list)