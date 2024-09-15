#functions and recursion in python
#functions:-

def summation(a,b):
    sum = a+b
    print(sum)
    return sum

x  = int(input("enter 1st no-"))
y  = int(input("enter 2nd no-"))
summation(x,y)

# example of Recursion
def factorialN(n):
    if n == 0 or n == 1:
        return 1
    else:
        result = n * factorialN(n-1)
        return result

x = int(input("enter the number:-"))
print(factorialN(x))