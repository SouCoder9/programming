#strings in python
myStr = "Soubhadra"
myStr2 = "Bhattacharya"
#concatenation operation
finalStr = myStr  +" "+ myStr2
print(finalStr)
#index accessing
char1 = finalStr[6]
print(char1)
#lenth of a string
print(len(finalStr))
#string slicing in python
print(myStr[5:])
print(myStr[2:5])
#str.endswith("substr")
print(myStr.endswith("ra"))
#str.capitalize()
print(myStr.capitalize())
#str.replace(old,new)
print(myStr.replace("o","r"))
#str.find("word")
print(finalStr.find("Bhattacharya"))
#str.count("Substring")
print(finalStr.count("b"))