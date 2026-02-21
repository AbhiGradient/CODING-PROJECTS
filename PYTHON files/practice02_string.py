
# str = "This is abhishek here"
# str1 = 'abhishek is a good boy'
# str2 = """Hey there its a sunny day"""
# str3 = "we are studying python \n i am  learning python \n and its very interesting"
# print(str3)

# String concatenation
str1 = "hello"
str2 = "World"
print(str1 + str2)  # Concatenation of strings without space
print(str1 + " " + str2)  # Concatenation of strings with space

"""or
str3 = str1 + str2
print(str3) 
"""

#length of string
str4 = "Python programming"
print(len(str4))  

"""
or 
len = len(str4)
print(len)
"""

# String indexing
str5 = "zeal_college"
print(str5[0])  # Accessing the first character
print(str5[5])  # Accessing the sixth character
"""indexing starts from 0 always and even spaces as well gets a index number"""
"""
or 
ch = str5[0]
print(ch)
"""

# String slicing
str6 = "abhishek_sapkale"
print(str6[0:8])  # Slicing from index 0 to 7   
print(str6[9:])   # Slicing from index 9 to the end
print(str6[:8])   # Slicing from the beginning to index 7
print(str6[1:5])  # Slicing from index 1 to 4 

#string functions
str = "i am from studying python from zeal college"
print(str.endswith("ege"))   #true
print(str.endswith("i am"))   #false
print(str.startswith("i am"))  #true
print(str.startswith("python"))  #false

print(str.capitalize())

print(str.replace("python","html"))

print(str.find("python"))  # Returns the index of the first occurrence of "python" in str, or -1 if not found.
print(str.find("o"))    

print(str.count("from"))  # Counts the number of occurrences of "from" in str.



