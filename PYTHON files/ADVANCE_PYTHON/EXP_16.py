import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr", "May"]
sales = [20, 35, 30, 45, 50]

plt.plot(months, sales, label="Sales")
plt.xlabel("Months")
plt.ylabel("Sales")
plt.title("Monthly Sales")
plt.legend()
plt.show()

plt.bar(months, sales, label="Sales")
plt.xlabel("Months")
plt.ylabel("Sales")
plt.title("Monthly Sales Bar Graph")
plt.legend()
plt.show()