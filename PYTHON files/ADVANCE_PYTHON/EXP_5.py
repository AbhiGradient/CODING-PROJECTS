class Course:
    def __init__(self, course_name):
        self.course_name = course_name

    def details(self):
        print(f"Course: {self.course_name}")

class Teacher:
    def __init__(self, teacher_name):
        self.teacher_name = teacher_name

    def details(self):
        print(f"Teacher: {self.teacher_name}")

class Student(Course, Teacher):
    def __init__(self, course_name, teacher_name, student_name):
        Course.__init__(self, course_name)
        Teacher.__init__(self, teacher_name)
        self.student_name = student_name

    def details(self):
        Course.details(self)
        Teacher.details(self)
        print(f"Student: {self.student_name}")

s = Student("Data Science", "Shamal Patil", "Abhishek")
s.details()
