import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr", "May"]
students = [45, 52, 48, 60, 65]

# 1. Line Graph
plt.plot(months, students, marker='o', label="Students")
plt.xlabel("Months")
plt.ylabel("Number of Students")
plt.title("Monthly Student Attendance - Line Graph")
plt.legend()
plt.show()


# 2. Bar Graph
plt.bar(months, students, label="Students")
plt.xlabel("Months")
plt.ylabel("Number of Students")
plt.title("Monthly Student Attendance - Bar Graph")
plt.legend()
plt.show()


# 3. Pie Chart
plt.pie(students, labels=months, autopct='%1.1f%%')
plt.title("Monthly Student Attendance - Pie Chart")
plt.show()


# 4. Area Graph
plt.fill_between(months, students, alpha=0.5, label="Students")
plt.plot(months, students, marker='o')
plt.xlabel("Months")
plt.ylabel("Number of Students")
plt.title("Monthly Student Attendance - Area Graph")
plt.legend()
plt.show()