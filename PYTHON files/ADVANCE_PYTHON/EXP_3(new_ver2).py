class Employee:
    def role(self):
        print("Employee has a role")

class Manager(Employee):
    def role(self):
        print("Manager oversees the team")

class Developer(Employee):
    def role(self):
        print("Developer writes code")

class Intern(Employee):
    def role(self):
        print("Intern assists with tasks")

manager = Manager()
developer = Developer()
intern = Intern()

manager.role()
developer.role()
intern.role()
