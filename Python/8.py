marks1 = 20
marks2 = 30
marks3 = 60
marks4 = 70
marks = [100,20,50,30,60,70] #python lists

#list can store a set of values 
#stores elements of any data type(int , float, char ) together no chriteria for homogenius type elements 
student = ["Karan",85.69,70]

#printing a list
print(student)
print(marks)
print(marks[2])
student[0] = "Arjun"
print(student)
# stings are immutable but charlists are mutable


#list slicing
print(marks[1:3])
print(marks[:2])
print(marks[1:])

#list methods
marks.append(90)
print(marks)
marks.insert(4,40)
print(marks)
marks.sort()
print(marks)
marks.sort(reverse = True)
print(marks)