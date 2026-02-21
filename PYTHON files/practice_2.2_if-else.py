"""
age = 1

if (age>=18):
    if (age >= 80 ):
        print("you are not eligible to drive")
    else :
        print("you are eligible to drive")
else : 
    print("you cannot drive")
"""

#even or odd
"""
num = int (input("Enter a number: "))

if (num % 2 == 0):
    print("the number is even")
elif(num % 2 != 0 ) :    #or else:
    print("the number is odd")
    """

#largest of three numbers
num1 = int (input("Enter first number"))
num2 = int (input("Enter second number"))
num3 = int (input("Enter third number"))

"""if(num1 > num2 ):
    if(num1 > num3):
        print(num1, "is greatest")
    else:
        print(num3, "is greatest")
elif(num2 > num3):
    print(num2, "is greatest")
else:
    print(num3, "is greatest")
"""
#or
"""
if(num1 >= num2 and num1 >= num3):
    print(num1, "is greatest")
elif (num2 >= num1 and num2 >= num3):
    print(num2, "is greater")
else:
    print(num3, "is greatest")
"""
#or

if(num1 >= num2 and num1 >= num3):
    print(num1, "is greatest")
elif (num2 >= num1):
    print(num2, "is greater")
else:
    print(num3, "is greatest")