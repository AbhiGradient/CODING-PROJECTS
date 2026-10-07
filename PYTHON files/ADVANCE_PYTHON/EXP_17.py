import matplotlib.pyplot as plt
import seaborn as sns

# Data
subjects = ["Maths", "Physics", "Chemistry", "English", "Programming"]
marks = [78, 85, 72, 90, 88]


# 1. Box Plot
sns.boxplot(
    x=marks,
    width=0.4,
    fliersize=8
)

plt.xlabel("Marks")
plt.title("Distribution of Student Marks - Box Plot")
plt.show()


# 2. Strip Plot
sns.stripplot(
    x=subjects,
    y=marks,
    size=8
)

plt.xlabel("Subjects")
plt.ylabel("Marks")
plt.title("Student Marks - Strip Plot")
plt.show()


# 3. Count Plot
grades = ["A", "B", "A", "A", "B", "C", "A", "B", "A", "C"]

sns.countplot(x=grades)

plt.xlabel("Grade")
plt.ylabel("Number of Students")
plt.title("Number of Students by Grade")
plt.show()


# 4. Heatmap
data = [
    [78, 82, 75],
    [85, 88, 80],
    [72, 76, 70],
    [90, 92, 88],
    [88, 85, 90]
]

sns.heatmap(
    data,
    annot=True,
    xticklabels=["Unit 1", "Unit 2", "Unit 3"],
    yticklabels=subjects
)

plt.xlabel("Units")
plt.ylabel("Subjects")
plt.title("Subject-wise Marks - Heatmap")
plt.show()