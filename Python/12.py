#loops in python
#while loop in python
count = 0
while count <= 10:
    print("hello")
    count= count + 1
print(count)
print("end of the loop")
num = (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20)
i = 1
while i <= len(num):
    if(i == 10):
        print(f"item found at index - {i}")
        break#terminates the entire loop after the proper index 
        # continue #terminates the current item and continues the rest of the loop
    else:
        print("finding....")
        i = i+1
print("End of the loop")

#for loop
for x in num:
    print(f"{x} hello")
else:#it's optional
    print('bye')

print("loop terminated")

# range function
for m in range(10): #ending point is 10
    print(m)
print("end of the loop")
for n in range(3,10): #starting point is 3 and ending point is 10
    print(n) 
print("end of the loop")
for o in range(0,20,2): #starting point 0 ending point 20 and increment per step is 2
    print(o)
print('end of the loop')