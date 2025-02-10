'''
• Write a Python program to read a file line by line and store it
into a list

'''

file_name = input("Enter the file name: ")

file = open("mydemofile.txt", 'r')  
lines = file.readlines()  
file.close()  

print("Lines in the file:")
print(lines)

