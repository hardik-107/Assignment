'''
• Write a Python script to sort (ascending and descending) a
dictionary byvalue.
'''


my_dict = {'apple': 10, 'banana': 5, 'cherry': 15, 'date': 7}


ascending = dict(sorted(my_dict.items(), key=lambda item: item[1]))


descending = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print("Ascending:", ascending)
print("Descending:", descending)
