'''
• Write a Python function to get the largest number, smallest
num and sum of all from a list.

'''



def find(list1):
    
    l=max(list1)
    s=min(list1)
    total=sum(list1)
    

    return l,s,total
    
    
list1=[3, 7, 1, 9, 4, -5]

l,s,total= find(list1) 
print("Largest:",l,"smallest:",s,"sum:",total)

    
    
        