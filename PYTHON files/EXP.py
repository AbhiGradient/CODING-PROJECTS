import pandas as pd
import numpy as np

# Create a DataFrame with missing values
data = {
    'Name': ['Amit', 'Sneha', 'Rahul', 'Priya', 'Karan'],
    'Age': [21, np.nan, 22, np.nan, 23],
    'Marks': [85, 90, np.nan, 78, np.nan]
}

df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Using fillna() to replace missing values
df_fill = df.copy()
df_fill["Age"] = df_fill["Age"].fillna(df_fill["Age"].mean())
df_fill["Marks"] = df_fill["Marks"].fillna(df_fill["Marks"].mean())

print("\nDataFrame after using fillna():")
print(df_fill)

# Using dropna() to remove rows containing missing values
df_drop = df.dropna()

print("\nDataFrame after using dropna():")
print(df_drop)
