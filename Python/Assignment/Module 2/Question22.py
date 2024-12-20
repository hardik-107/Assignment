'''
• Write a Python program to get a string made of the first 2
and the last 2chars from a given a string. If the string length
is less than 2, return instead of the empty string.
o Sample String: w3resource' o
Expected Result: 'w3ce' o
SampleString: 'w3' o Expected
Result:
'w3w3' o Sample String: ' w' o
Expected Result: Empty String
'''

str1=input("Enter String:")

print(str1[:2],end="")
print(str1[-2:])

if str1.__len__<=2:
    print(str1[:2])

