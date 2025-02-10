'''
• Write a Python program to copy the contents of a file to another
file.

'''

source_file = input("Enter the source file name: ")
destination_file = input("Enter the destination file name: ")


source = open(source_file, 'r')
destination = open(destination_file, 'w')


content = source.read()  
destination.write(content) 


source.close()
destination.close()

print(f"Content from {source_file} has been copied to {destination_file}")
