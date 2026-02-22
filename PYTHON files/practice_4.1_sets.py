collection = {1, 2, 3, 4, "HELLO", "WORLD", "WORLD"}
print(collection)
print(type(collection))

collection = {1, 2, 4, 2, "HELLO", "WORLD", "WORLD", 4, 2}
print(collection)

print(len(collection)) #total number of items in the sets, ignoring duplicates

collection = {} #empty dictionary 
print(type(collection))

collection = set() #empty set
print(type(collection))

"""
1. sets are mutable
2. but items/elemenets inside the sets must be immutable
3. sets are unordered
4. sets are unindexed
5. sets do not allow duplicates
6. tupple is immutable, so it can be used inside the sets
7. list and dictionary are mutable, so they cant be used inside the sets
"""

#set methods
collection = set()
collection.add(1)
collection.add(2)
collection.add(2)
collection.add("apple")
print(collection)

collection.remove(2)
print(collection)

print(len(collection))
collection.clear() # empties the sets
print(len(collection))

collection = {"hello", "world", "python"}
print(collection.pop()) #removes and returns a random item from the sets
print(collection.pop())
print(collection.pop()) #used to generate random values from set

set1 = {1, 2, 3,}
set2 = {2, 3, 4}

print(set1.union(set2)) #returns a new set with all items from both sets, ignoring duplicates

print(set1) #orirignal sets remain unchanged 
print(set2)

print(set1.intersection(set2)) 





