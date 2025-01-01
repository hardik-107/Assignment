'''
Write a Python function to check whether a number is
perfect or not.

'''

def perfect(number):
    
    sum=0
    for i in range(1,number):
        if number%i==0:
            sum+-i    
            
print(perfect(6))    
print(perfect(28))   
print(perfect(12))        