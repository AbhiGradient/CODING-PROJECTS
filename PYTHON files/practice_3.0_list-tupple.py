#list
marks = [56.23, 78.25, 98.99, 85.63, 87.12]
print(marks)
print(type(marks))
print(marks[0])
print(marks[1])
print(len(marks))

student = ["abhishek", 99.99, 56, "jalgaon"]
print(student)
#mutability of list:
print(student[0])
student[0] = "sapkale"  #not possible in string in python due to immutability
print(student)

#list slicing:
#called as sublist
marks = [85, 78, 98, 56, 89, 90]
print(marks[0:3])  #0,1,2
print(marks[2:5])  #2,3,4 

#list methods:
marks = [85, 78, 98, 56, 89, 90]
marks.append(100)  #add element at the end of the list  
print(marks)
marks.insert(2, 99)  #add element at the specified index
print(marks)
marks.sort()  #sort the list in ascending order
print(marks)
marks.sort(reverse=True)  #sort the list in descending order
print(marks)
marks.reverse()  #reverse the order of the list
print(marks)

list = ["apple", "banana", "cherry", "date", "fig", "grape"]

list.sort()  #sort the list in ascending order
print(list)
list.sort(reverse=True)  #sort the list in descending order
print(list)
list.reverse()  #reverse the order of the list
print(list)

