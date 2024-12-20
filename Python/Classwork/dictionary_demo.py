mydict={'id':101,'name':'karan','coure':'Java'}
print(mydict)

for i in mydict:
    print(i," ",mydict[i])
   
mydict['id']=102
mydict['name']='nirbhay'
mydict['coure']='python'
print(mydict)
print(mydict.keys())
print(mydict.values())
print(mydict.items())

for i,j in mydict.items():
    print(f"key : {i}  value: {j}")
    
if "Java" in mydict['coure']:
    print("Ye")
else:
    print("No")
    
'''mydict.pop('id')
print(mydict)      
'''
mydict.popitem()
print(mydict)

    