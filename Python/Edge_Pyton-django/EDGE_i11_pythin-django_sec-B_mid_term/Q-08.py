import tkinter as tk

def display_name():
    name = name_entry.get()  # Get the text entered by the user
    name_label.config(text=f"Hello, {name}!")  # Update the label with the name

# Create the main window
root = tk.Tk()
root.title("Name Display")

# Create a label asking for the user's name
prompt_label = tk.Label(root, text="Enter your name:")
prompt_label.pack()

# Create a text box for the user to enter their name
name_entry = tk.Entry(root)
name_entry.pack()

# Create a button that calls the display_name function when clicked
display_button = tk.Button(root, text="Display Name", command=display_name)
display_button.pack()

# Create a label to display the entered name
name_label = tk.Label(root, text="")
name_label.pack()

root.mainloop()