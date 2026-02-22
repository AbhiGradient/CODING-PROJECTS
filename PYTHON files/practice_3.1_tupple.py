#Tuple
"""
list => mutable
tupple => immutable
"""
tup = (2, 1, 3, 5, 4)
print(tup)
print(tup[0])
print(tup[2])
"""tup[0] = 10 #TypeError: 'tuple' object does not support item assignment"""

tuppl = ()
print(tuppl)
print(type(tuppl))

tuppl = (1)
print(tuppl) 
print(type(tuppl))  #int

tuppl = (1,)
print(tuppl)
print(type(tuppl))  #tuple

#slicing of tupple works same as string and list
print(tup[1:3])

#tupple methods
tup = (1, 2, 3, 4)
print(tup.index(2)) #returns the index of the first occurrence of the specified value
print(tup.count(2)) #returns the number of times the specified value appears in the