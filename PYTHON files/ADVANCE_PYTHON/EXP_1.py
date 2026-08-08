class Student: 
    def __init__(self, name, roll_no, branch):
        self.name = name
        self.roll_no = roll_no
        self.branch = branch

    def display(self):
        print("Name:", self.name)
        print("Roll No:", self.roll_no)
        print("Branch:", self.branch)
        print("-" * 45)

student1 = Student("ABHISHEK SAPKALE", "AD1156", "AIDS") 
student2 = Student("SARTH DANGE", "AD1117", "AIDS")
student3 = Student("SAUJAS SALUNKE", "AD1154", "AIDS")


print("Student 1 Details:")
student1.display()
print("Student 2 Details:")
student2.display()
print("Student 3 Details:")
student3.display()
    