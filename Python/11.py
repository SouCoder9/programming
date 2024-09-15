# set is mutable but elements in the set is immutable
collection = {"hello","world","hello","world",1,2,3,4,1,2,3,4,6}
print(len(collection)) #TOTAL NUMBERS OF ITEMS
empty=set()# because the syntax empty{} will be of an empty dictionary
print(type(empty))

#set methods:-
collection.add("Soubhadra")
collection.remove(6)
collection.pop()#randomly removes any item
print(collection)
collection.clear()#empties the entire set 
print(collection)

set1 = {1,2,3,4}
set2 = {2,3,4,5}
print(set1.union(set2))#all elements print but repeating elements ony prints once
print(set1.intersection(set2))#only the common elements get printed