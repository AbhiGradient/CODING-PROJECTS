def calc_sum(a, b):
    sum = a + b
    print(sum)


calc_sum(3, 5)
calc_sum(78, 89)

def calc_sum(a, b):   #a & b are parameters 
    return a +b

sum = calc_sum(5, 6)  #function call #5 & 6 are arguments
print(sum)

def print_hello():
    print("hello world")

print_hello()
print_hello()
print_hello()
print_hello()

#average  of 3 nos
def avg(a, b, c):
    sum = a + b + c
    avg = sum/3
    print(avg)
    return avg
avg(3, 8, 6)
avg(95, 98, 91)

print("hello wolrd!!")

def cal_prod(a=8, b=2):
    print(a * b)
    return a * b
cal_prod()

def cal_prod(a, b=2):
    print(a * b)
    return a * b
cal_prod(4)

"""
def cal_prod(a=5, b):
    print(a * b)
    return a * b
cal_prod(4) #not possible to call this function as a has default value but b does not have default value. So, we need to provide value for b while calling the function.    
#default value should only be given from last not first

"""
#function to print length of a list
cities = ["delhi", "mumbai", "kolkata", "chennai"]
heroes = ["superman", "batman", "spiderman", "ironman"]
def print_len(list_name):
    print(len(list_name))
  
print_len(cities)
print_len(heroes)

#print elements in a asingle line
# print(heroes[0], end = " ") # end is used so that there is a space between the words  in a single line 
# print(heroes[1], end = " ")

def print_list(list):
    for i in range (len(list)):
        print(list[i], end = " ")
print_list(cities)

print("\n")

def print_list(list):
    for item in list:
        print(item, end = " ")
print_list(cities)

#factorial

def fact (n):
    if n == 0 or n == 1:
        return 1
    else:
        return  n * fact (n - 1)
    
print(fact(7))

#or
def cal_fact(n):
    fact = 1
    for i in range (1, n + 1):
        fact *= i
        print(fact)
    return fact
cal_fact(6)

"""
n = int (input("enter a number: "))
print(fact(n))
"""

# $ to ₹ conversion
def converter(n):
    return n * 83

dollar = int(input("enter amount in dollars: "))
print("amount in rupees: ", converter(dollar))  

#or 
def converter2(usd_val):
    inr_val = usd_val * 83 
    print(usd_val, "dollars is equal to", inr_val, "INR")
converter2(10)

