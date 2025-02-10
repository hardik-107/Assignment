'''
• Write a Python program to write a list to a file.

'''

my_list = ["apple", "banana", "cherry", "date"]

file_name = input("Enter the file name to write to: ")


file = open(file_name, 'w')


for item in my_list:
    file.write(item + "\n")

file.close()  

print(f"List has been written to {file_name}")
