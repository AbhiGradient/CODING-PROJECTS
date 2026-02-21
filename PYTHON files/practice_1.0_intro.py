print("Hello  World")
"""
hggjh
yhfj
fdjx
fjgjn
"""

# This is a comment

#Arithematic operators
a = 5
b = 2
print(a + b) #finding sum using addition operator
print(a - b) #finding difference using subtraction operator
print(a % b) #finding remiander using modulo operator
print(a ** b) #finding power using exponentiation operator

#Comparison operators / Relational operators
X = 50
Y = 98
print(X > Y) #greater than operator
print(X < Y) #less than operator
"""PYTHON ALWAYS RRETURNS BOOLEAN VALUE TRUE OR FALSE FOR COMPARISON OPERATORS"""
print(X != Y) #not equal to operator
print(X == Y) #equal to operator
print(X >= Y) #greater than or equal to operator
print(X <= Y) #less than or equal to operator

#Assignment operators
p = 10
p += 5 #p = p + 5
print(p)

q = 10
q -= 3 #q = q - 3
print(q)

r = 10
r *= 2 #r = r * 2
print(r)  

s = 10
s /= 4 #s = s / 4
print(s)

t = 10
t **= 3 #t = t ** 3
print(t)

#Logical operators
print(not False) #logical NOT operator
print(not True) #logical NOT operator
print(True and False) #logical AND operator
print(True or False) #logical OR operator

u = 50
v = 30
print(not (u>v)) #logical NOT operator with comparison operator
print((u>v) and (u!=v)) #logical AND operator with comparison operators
print((u<v) or (u==v)) #logical OR operator with comparison operators

value1 = True
value2 = False
print("and operator: ", value1 and value2) #logical AND operator
print("or operator: ", value1 or value2) #logical OR operator

print("and operator: ",(u>v) and (u!=v)) #logical AND operator with comparison operators
print("or operator: ",(u<v) or (u==v)) #logical OR operator with comparison operators

#Type conversion
num1 = 10
num2 = 3.95
num3 = "100"
print(float(num1)) #converting integer to float
print(int(num2)) #converting float to integer

print(type(num1)) #checking the type of num1
print(type(num2)) #checking the type of num2
print(type(num3)) #checking the type of num3

#String concatenation
str1 = "Hello"
str2 = "World"
print(str1 + " " + str2) #concatenating two strings with a space

"""
#input and output
name = input("Enter your name: ") #taking input from user
print("welcome ", name) #printing output with user input

age = input("Enter your age: ") #taking input from user
print("Your age is ", age) #printing output with user input

print(type(age))
print(type(name))
#input() is always treated as string data type, even if we enter a number. To convert it to integer, we can use int() function.

value = int (input ("Enter your number: "))
print(type(value)) #checking the type of value after conversion to integer
#same with float() function for converting to float data type
"""


#Example
Name = input("Enter your name: ")
Age = int(input("Enter your age: "))
marks = float(input("Enter your marks: "))
print("Name: ", Name)
print("Age: ", Age)
print("Marks: ", marks)