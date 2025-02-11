import pandas as pd

# Data dictionary
data = {
    'Student': ['Alice', 'Bob', 'Charlie'],
    'Math': [85, 78, 92],
    'Science': [88, 84, 89]
}

# Create DataFrame
df = pd.DataFrame(data)

# Add a new column 'Total'
df['Total'] = df['Math'] + df['Science']

# Display the row of the student with the highest total score
highest_score = df[df['Total'] == df['Total'].max()]

print("DataFrame with 'Total' column:")
print(df)
print("\nStudent with the highest total score:")
print(highest_score)
