import matplotlib.pyplot as plt
import seaborn as sns

marks = [45, 50, 55, 60, 62, 65, 70, 72, 75, 80, 85, 90]

sns.histplot(marks)
plt.xlabel("Marks")
plt.ylabel("Number of Students")
plt.title("Distribution of Marks")
plt.show()

hours = [1, 2, 3, 4, 5, 6, 7, 8]
scores = [40, 45, 50, 55, 65, 70, 78, 85]

plt.scatter(hours, scores)
plt.xlabel("Study Hours")
plt.ylabel("Marks")
plt.title("Study Hours vs Marks")
plt.show()