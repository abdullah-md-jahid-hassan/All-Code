import matplotlib.pyplot as plt

# Data
categories = ['Red', 'Blue', 'Green', 'Yellow']
values = [10, 20, 15, 25]

# Create the bar chart
plt.bar(categories, values, color=['red', 'blue', 'green', 'yellow'], label='Values')

# Add labels and title
plt.xlabel("Categories")
plt.ylabel("Values")
plt.title("Bar Chart Example")

# Add legend
plt.legend()

# Display the chart
plt.show()
