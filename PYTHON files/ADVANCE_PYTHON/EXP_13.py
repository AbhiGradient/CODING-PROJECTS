import numpy as np

a = np.array([[1, 2], [3, 4]])
b = np.array([[5, 6], [7, 8]])

print("Array A:")
print(a)

print("Array B:")
print(b)

print("Addition:")
print(a + b)

print("Multiplication:")
print(a * b)

print("Transpose:")
print(a.T)

print("Reshaped Array:")
print(a.reshape(4, 1))