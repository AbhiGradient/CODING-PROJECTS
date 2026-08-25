import pandas as pd

data = pd.read_csv("student_exp15.csv")

print("Original Data:")
print(data)

data_filled = data.fillna(0)

print("After fillna():")
print(data_filled)

data_dropped = data.dropna()

print("After dropna():")
print(data_dropped)