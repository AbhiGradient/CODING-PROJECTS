import pandas as pd

data = pd.read_csv("student_exp14.csv")

print("Original Data:")
print(data)

print("Filtered Data:")
print(data[data["marks"] > 50])

print("Sorted Data:")
print(data.sort_values("marks"))

print("Summary Statistics:")
print(data["marks"].describe())