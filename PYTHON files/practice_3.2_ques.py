# program to take 3 movies as input and store them in a list and print the list
movies = []

"""
mov1 = input("Enter first movie: ")
mov2 = input("Enter  second movie: ")
mov3 = input("Enter third movie: ")

movies.append(mov1)
movies.append(mov2)
movies.append(mov3)

print(movies)
"""
#or

"""
mov = input("Enter first movie: ")
movies.append(mov)
mov = input("Enter second movie: ")
movies.append(mov)
mov = input("Enter third movie: ")
movies.append(mov)

print(movies)

"""
#or 

movies.append(input("Enter first movie: "))
movies.append(input("Enter second movie: "))    
movies.append(input("Enter third movie: "))
print(movies)

#palindrome

list1 = [1, 2, 2, 1]
list1 = ["m", "q", "m", "r"]
copy_list1 = list1.copy()
copy_list1.reverse()

if(copy_list1 == list1):
    print("List is palindrome")
else:
    print("list is not palindrome")


#count
grade = ("A", "b", "C", "A", "B", "C", "A")
print(grade.count("A"))

grade = ["A", "b", "C", "A", "B", "C", "A"]
grade.sort()
print(grade)