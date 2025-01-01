'''
• Write a Python program to check multiple keys exists in a
dictionary
'''
my_dict={'Apple':20,'Banana':15,'Kiwi':7}

i=['Apple','Banana']


for key in i:
    if key in my_dict:
        print(f"The key {i} exists inside dictionary")
    else:
        print("No")    