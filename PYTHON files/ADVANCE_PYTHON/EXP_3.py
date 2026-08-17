class Employee:
    def __init__(self, name, emp_id, sal):
        self.name = name
        self.emp_id = emp_id
        self.sal = sal

    def display_employee(self):
        print("Employee Name: ", self.name)
        print("Employee ID: ", self.emp_id)
        print("Employee Salary: ", self.sal)
    


class Manager(Employee):
    def __init__(self, name, emp_id, sal, dpt):
        super().__init__(name, emp_id, sal)
        self.dpt = dpt

    def display_manager(self):
        self.display_employee()
        print("Employee Department: ", self.dpt)


S = Manager("Saujas", 57, 70000, "Sales")
A = Employee("Abhishek", 56, 90000)

print("Employee Details")
S.display_employee()
print("-" * 45)
print("Manager Details")
S.display_manager()
print("-" * 45)
print("Employee Details")
A.display_employee()