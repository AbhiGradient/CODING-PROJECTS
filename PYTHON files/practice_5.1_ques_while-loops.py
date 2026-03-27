"""
i = 1
while  i <= 100:
    print(i)
    i+= 1

i = 100
while i >= 1:
    print(i)
    i -= 1

i = 1
while i<= 10:
    print("2 x ", i, "=", 2*i)
    i += 1
"""
#

"""
n = int(input("Enter value for finding table: "))
i = 1
while i<= 10:
    print(n, "x", i, "=", n*i )
    i += 1
"""
#

"""
num = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
count = 0
while count < len(num):
    print(num[count]) #nums[0], num[1], num[2], .......eternity
    count += 1

print()

heroes = ["ironman", "thor", "hulk", "captain america", "black widow"]
count = 0
while count < len(heroes):
    print(heroes[count]) #heroes[0], heroes[1], heroes[2], .......eternity
    count += 1
"""
#

"""
num = (1, 4, 9, 16, 25, 36, 49, 64, 81, 100)
x = 36

i = 0
while i < len(num):
    if(num[i] ==  x):
        print("found at index: ", i)
    i += 1
"""

"""
num = (1, 4, 9, 16, 25, 36, 49, 64, 36, 81, 100, 36, 41)
x = 36

i = 0
while i < len(num):
    if(num[i] ==  x):
        print("found at index: ", i)
    else:
        print("finding....")
    i += 1


"""

num = (1, 4, 9, 16, 25, 36, 49, 64, 36, 81, 100, 36, 41)
x = 36

i = 0
while i < len(num):
    if(num[i] ==  x):
        print("found at index: ", i)
        break
    else:
        print("finding....")
    i += 1
print("End of loop")

i = 0
while i<= 10:

    if(i % 2 == 0):
        i += 1
        continue
    print(i)
    i += 1

while i<= 10:

    if(i % 2 != 0):
        i += 1
        continue
    print(i)
    i += 1

