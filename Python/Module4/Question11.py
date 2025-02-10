'''
• Write python program that user to enter only odd numbers,
else will raise an exception.
'''

def get_num():
    
    try:
        n=int(input("Enter a number:"))
        if n%2==0:
             print("It is not an odd number:")
             return get_num()  
        else:
            print("Valid input")
               

    except Exception as E:
        
    
       print("Please enter valid input:")
       return get_num()