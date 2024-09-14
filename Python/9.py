#tuples in python 
# tuples are inmutable unlikely list
tup = (15,25,35,45,65,75,85,95)

# tuple index-item assignment not allowed in python
print(tup[5])

#single element tuple declaration
tup1 =(50,)#always use a comma when declairing a tuple
tup2 = ("sou",)

#tuple slicing
print(tup[1:4])

#tuple methods
print(tup.index(35))#return the index of the element 
print(tup.count(35))#return the  number of repetation of the element