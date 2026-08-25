import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

data = pd.DataFrame({
    "Maths": [80, 70, 90, 60, 75],
    "Science": [85, 65, 88, 70, 80],
    "English": [78, 72, 85, 68, 74]
})

sns.heatmap(data.corr(), annot=True)
plt.title("Subject Correlation Heatmap")
plt.show()

sns.boxplot(data=data)
plt.title("Marks Boxplot")
plt.show()