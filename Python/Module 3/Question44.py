'''
• Write a Python program to read a random line from a file

'''

file=open("mydemofile.txt","w")
file.write("This is my first file")
file.close()


file=open("mydemofile.txt","r")
print(file.read())
file.close()