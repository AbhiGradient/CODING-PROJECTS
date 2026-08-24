f = open("students.txt", "w")

n = int(input("Enter number of students: "))

for i in range(n):
    roll = input("Enter roll number: ")
    name = input("Enter student name: ")
    marks = input("Enter marks: ")

    f.write(roll + " " + name + " " + marks + "\n")

f.close()

f = open("students.txt", "r")

print("\nStudent Records:")
print(f.read())

f.close()