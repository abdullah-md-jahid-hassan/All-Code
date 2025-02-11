import numpy as np

# Create a 4x4 matrix with random integers between 1 and 20
matrix = np.random.randint(1, 21, (4, 4))

# Display the original matrix
print("Original Matrix:")
print(matrix)

# Replace all even numbers with 0
matrix[matrix % 2 == 0] = 0

# Display the modified matrix
print("\nModified Matrix (even numbers replaced with 0):")
print(matrix)