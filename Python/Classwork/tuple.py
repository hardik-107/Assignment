mylist=["apple","banana","grapes"]
mytup=(101,105,109,202)
myset={102,"A",103,"B"}

mylist1=["mango","pineapple","guava"]
mylist3=mylist+mylist1

print(mylist3)


if 109 in mytup:
    print("Yes")
else:
    print("No")    
    
print(mylist3[:5])

print(mylist3[::-1])

print(mylist3[3])

print(mytup.__class__)

mylist4=["tomato","carrot","potato"]

mylist5=mylist+mylist4

print(mylist5[::-1])

mytup1=(205,206,207,208,209,210)

print(mytup1)

mytup2=mytup+mytup1

print(mytup2)