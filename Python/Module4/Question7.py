'''

• Write a python program to find the longest words
'''
def find_longest_words(mydemofile.txt):
    file = open("mydemofile.txt", 'r')  
    words = file.read().split() 
    file.close() 
    max_length = len(max(words, key=len))  
    longest_words = [word for word in words if len(word) == max_length]  
    return longest_words


file_name = input("Enter the file name: ")
longest_words = find_longest_words(file_name)
print("The longest word(s):", longest_words)
