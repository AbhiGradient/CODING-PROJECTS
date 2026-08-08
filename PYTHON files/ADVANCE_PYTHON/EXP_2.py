class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no
        print("Constructor called")
        print(f"Name: {self.name}, Roll No: {self.roll_no}")

    
    def __del__(self):
        print("Destructor called")


s1 = Student("Abhishek", 101)

del s1

