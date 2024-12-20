
file=open("mydemofile.txt","w")
file.write("This is my first file")
file.close()


file=open("mydemofile.txt","r")
print(file.read())
file.close()