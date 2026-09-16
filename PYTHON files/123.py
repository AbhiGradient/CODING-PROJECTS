import pandas as pd


data = {
    'Name': ['Rahul', 'Priya', 'Amit', 'Sneha', 'Rohan'],
    'Age': [20, None, 21, 19, None],
    'Marks': [85, 90, None, 78, 88],
    'City': ['Pune', 'Mumbai', None, 'Nashik', 'Pune']
}

df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)


print("\nDataFrame after using fillna():")
df_filled = df.copy()

df_filled['Age'] = df_filled['Age'].fillna(df_filled['Age'].mean())
df_filled['Marks'] = df_filled['Marks'].fillna(df_filled['Marks'].mean())
df_filled['City'] = df_filled['City'].fillna('Unknown')

print(df_filled)


print("\nDataFrame after using dropna():")
df_dropped = df.dropna()

print(df_dropped)