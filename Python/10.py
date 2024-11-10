student = {
    "name": "Alice",
    "age": 25,
    "courses": ["Math", "Physics"],
    "grade": "A",
    "is_graduated": True
}

# Accessing data and using methods
print(student.get("name"))         # Alice
print(student.keys())              # dict_keys(['name', 'age', 'courses', 'grade', 'is_graduated'])
print(student.values())            # dict_values(['Alice', 25, ['Math', 'Physics'], 'A', True])

student.update({"grade": "A+"})    # Updates grade
print(student)                     # {'name': 'Alice', 'age': 25, 'courses': ['Math', 'Physics'], 'grade': 'A+', 'is_graduated': True}

 
age = student.pop("age")
print(age)  # Output: 26
print(student)  
student.clear()
print(student)  # Output: {}
student_copy = student.copy()
print(student_copy)
