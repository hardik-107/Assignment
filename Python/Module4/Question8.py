'''
• Write a Python program to count the number of lines in a text
file.

'''
file_name = input("Enter the file name: ")

file = open(file_name, 'r') 
line_count = sum(1 for _ in file) 
file.close()  

print(f"The number of lines in the file is: {line_count}")
