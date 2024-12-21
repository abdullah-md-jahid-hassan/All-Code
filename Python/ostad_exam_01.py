def generate_fibonacci_by_terms(n):
    #Fibonacci series for terms
    if n == 0:
        return []
    elif n == 1:
        return [0]
    fib = [0, 1]
    while len(fib) < n:
        fib.append(fib[-1] + fib[-2])
    return fib

def generate_fibonacci_by_value(max_value):
    #Fibonacci series for maximum value
    fib = [0, 1]
    while True:
        next_value = fib[-1] + fib[-2]
        if next_value > max_value:
            break
        fib.append(next_value)
    return fib

def main_menu():
    while True:
        print("\nChoose an option:")
        print("1. Generate Fibonacci series by number of terms")
        print("2. Generate Fibonacci series by maximum value")
        print("3. Exit")
        
        choice = input("Enter your choice: ")
        if choice == "1":
            try:
                terms = int(input("Enter the number of terms: "))
                if terms < 0:
                    print("Please enter a non-negative integer.")
                    continue
                result = generate_fibonacci_by_terms(terms)
                print(f"Fibonacci series ({terms} terms): {', '.join(map(str, result))}")
            except ValueError:
                print("Invalid input! Please enter an integer.")
        
        elif choice == "2":
            try:
                max_value = int(input("Enter the maximum value: "))
                if max_value < 0:
                    print("Please enter a non-negative integer.")
                    continue
                result = generate_fibonacci_by_value(max_value)
                print(f"Fibonacci series (up to {max_value}): {', '.join(map(str, result))}")
            except ValueError:
                print("Invalid input! Please enter an integer.")
        
        elif choice == "3":
            print("Exiting the program. Goodbye!")
            break
        
        else:
            print("Invalid choice! Please choose 1, 2, or 3.")

main_menu()
