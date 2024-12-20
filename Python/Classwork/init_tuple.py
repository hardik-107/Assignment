

tup1=('apple','banana','strawberry')

count=0
for i in tup1:
    print(i)
    count+=1


print("Total number of elements in tuple are:",count)


n=int(input("Enter the length:"))

list1=[]

for i in range(n):
    element=input("Enter your characters:")
    list1.append(element)

print(list1[-4::-1])

    