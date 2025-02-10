'''
Write a Python program to read a file line by line
store it into a variable

'''
file_name = input("Enter the file name: ")

file = open("mydemofile.txt", 'r') 
content = file.read()  
file.close()  


print("File content stored in the variable:")
print(content)
