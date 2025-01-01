'''
• Write a Python script to concatenate following dictionaries to
create anew one.
'''
dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}
dict3 = {'e': 5, 'f': 6}

dict4={}
for i in [dict1,dict2,dict3]:
    dict4.update(i) 
    
print(dict4)
print(type(dict4))