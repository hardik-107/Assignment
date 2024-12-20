'''
• Write a Python program to get a single string from two
given strings,separated by a space and swap the first two
characters of each string.
'''

str1="This is python" 

str2=" This is Java"

str3=str1+str2

print(str3)

str1[0]=str2[1]
print(str1+str2)
