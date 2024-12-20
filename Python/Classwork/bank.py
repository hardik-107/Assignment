
acc_no=int (input("Enter Account Number :"))

acc_name=input("Enter your name:")

balance=int (input("Enter your balance:"))

if balance>=40000:
    print("Acc_no : ",acc_no,"Acc_name :",acc_name,"Balance :",balance)
    print("Your Interest is 10%")
    
elif balance>=30000:
    print("Acc_no :",acc_no,"Acc_name :",acc_name,"Balance :",balance)
    print("Your Interest is 5%")
        
elif balance>=20000:
    print("Acc_no :",acc_no,"Acc_name :",acc_name"Balance :",balance)
    print("Your interest is 2%")
            
else:
    print("Acc_no :",acc_no,"Acc_name :",acc_name,"Balance :",balance)
    print("No Interest")


