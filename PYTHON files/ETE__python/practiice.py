s1 = "hello"
s2 = "world"
print(s1 + s2)

result = s1 + s2
print(result)

s = "hello "
print(s * 3)

print("----" * 10)

print ("abhi" * 14)

s = "abhi "
print(s * 10)

print (4*5)

s = 'this'
print(s)
# s = """is shit
#     in phthon qnd doesn to mean
#     "python", 'zeal'
#       anything """
# print(s)

name = "abhishek"

print(name[len(name)-1])
print(name[-1])
print(type(name))


a = ["cherry", "banana", "apple"]
print(a[len(a)-1])
print(a[-1])
print(a[-1:-3:-1])
empty = []
print(type(empty))

print(a[::2])

mixed = [1, 2 ,"apple", "hello", 3.14, True]
print(mixed)

nums = [1,2, 3, 4, 5]
print(nums)
nums[1] = 85
print(nums)

nums.append(50)
print(nums)

nums.insert(3, 78)
print(nums)

nums.remove(78)
print(nums)
nums.pop() 
print(nums)

x = nums.pop(2)
print(nums)
print(x)


fruits = ["apple", "banana", "cherry"]
for x in fruits:
    print(x)

# print()

# for fruits in fruits:
#     print(fruits)

for i in range (len(fruits)):
    print(f"{i}, {fruits[i]}")
print()

for i, fruit in enumerate(fruits):
    print(f"{i},  {fruit}")
print()

for i, fruit in enumerate(fruits):
    print(f"{i},  {fruit}")
print()

i = 0
while i < len(fruits):
    # print(f"{i}, {fruits[i]}")
    # print()
    print(fruits[i] )
    i += 1

x = [len(fruit) for fruit in fruits]
print(x)  

a = [1, 2, 3, 4, 5]
b = [6, 7, 8, 9, 10]

c = a + b
print(c)

x = [0] 
print(x * 4)

y = [1, 2] * 3
print(y)

print("apple" in fruits)
print("Apple" in fruits)
print("mango" not in fruits)
print("cherry" not in fruits)

item = "mango"
if item in fruits:
    print(f"{item} , present in fruits")
else:
    print(f"{item} , not present in fruits")

item = "apple"
if item in fruits:
    print(f"{item} , present in fruits")
else:
    print(f"{item} , not present in fruits")

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(matrix[2][1])
print(matrix[0])
print(matrix[2])

for i in range(len(matrix)):
    print(f"{i}, {matrix[i]}")

for i in matrix:
    print(i)

print()

for i in range(len(matrix)):
    print(matrix[i])

for row in matrix:
    for element in row:
        print (element, end="   ")
    print()

square = [x**2 for x in range (1,  6)]
print(square)

nums = [1, 2, 3, 4, 5, 6, 7, 8]
even = [x for x in nums if x%2  == 0]
print(even)

words = ["hello", "world", "python"]
uppr = [w.upper() for w in words]
print(uppr)

#tuple
empty = ()
print(type(empty))

nums = (1, 2, 3, 4, 5)
mixed = ("hello", True, 145)
print(mixed)

x = (5, )
print(type(x))

t = 4, 5, 6
print(type(t))

t2 = tuple([1,2,3])

fruits =  ("apple", "banana", "cherry")
print(fruits[0])
print(fruits[1])
print(fruits[2])

print(fruits[-1])
print(fruits[0:3:2])

t = 4, 5, 6

person = ("abhishek", 20, "pune")
name, age, city = person
print(name, age, city)

a = 45
b = 69
a,b = b,a
print(a,b)

s = {1, 2, 3}
print(s)
print(type(s))

list = [4, 5, 6]
s2 = set(list)
print(s2)

s3 = set("hello")
print(s3)

mixed = {145, True, "hello"}
print(mixed)

a = {1,2,3,4}
b = {4,5,6,7}
print(a-b)
print(a.difference(b))
print(b-a)
print(b.difference(a))
print(a|b)
print(a.intersection(b))
print(a&b)
print(a.union(b))
print(a^b)

square = {x**2 for x in range(1,6) }
print(square)

random = [4,5,6,7,8,9]
even = {x for x in random if x%2 == 0}
print(even)

s = "programming"
set = set(s)
print(set)

vowels = {ch for ch in s if ch in "aeiou"}
print(vowels)

#dict

student = {"name" : "abhishek",
           "age" : 20,
           "city" : "pune"
           
           }

print(student)
print(type(student))

empty = dict()
print(empty)
empty1 = {}
print(empty1)

d = dict(name = "raj", age = 20)
print(d)

pairs  = [("a", 1 ), ]