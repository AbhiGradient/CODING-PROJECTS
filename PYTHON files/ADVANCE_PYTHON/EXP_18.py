import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

data = pd.DataFrame({
    "Student": ["Abhishek", "Sarth", "Saujas", "Soham", "Om",
                "Shubham", "Soham_ran", "Nihal"],

    "Maths": [80, 70, 90, 60, 75, 85, 78, 92],

    "Science": [85, 65, 88, 70, 80, 90, 76, 89],

    "English": [78, 72, 85, 68, 74, 82, 79, 91]
})

data.set_index("Student", inplace=True)


# sns.heatmap(data.corr(), annot=True)

# plt.title("Subject Correlation Heatmap")
# plt.show()



# sns.boxplot(data=data, orient="h")

# plt.xlabel("Marks")
# plt.ylabel("Subjects")
# plt.title("Subject-wise Marks Boxplot")
# plt.show()

sns.scatterplot(
    x="Maths", 
    y="Science", 
    data=data
)
plt.title("Maths vs Science Marks")
plt.xlabel("Maths")
plt.ylabel("Science")
plt.show()

sns.histplot(
    data=data,
    x="Maths",
    kde=True
)
plt.title("Distribution of Maths Marks")
plt.xlabel("Maths")
plt.ylabel("Frequency")
plt.show()