# Conditional Statements
age = int(input("enter age:-"))
if(age >= 18 and age > 0):
    print("you can vote.")
elif(age < 18):
    print("you can not vote")
else:
    print("you entered wrong age")

print("End of the code")