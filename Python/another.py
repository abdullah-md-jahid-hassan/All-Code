def generate_fibonacci_by_terms(n):
    """Generate Fibonacci series up to n terms."""
    if n == 0:
        return []
    elif n == 1:
        return [0]
    fib = [0, 1]
    while len(fib) < n:
        fib.append(fib[-1] + fib[-2])
    return fib

def generate_fibonacci_by_value(max_value):
    """Generate Fibonacci series up to a maximum value."""
    fib = [0, 1]
    while True:
        next_value = fib[-1] + fib[-2]
        if next_value > max_value:
            break
        fib.append(next_value)
    return fib


print("\nChoose an option:")
print("1. Generate Fibonacci series by number of terms")
print("2. Generate Fibonacci series by maximum value")
print("3. Exit")
choice = 0

while True:
    choice = int(input("\n\nEnter your choice: "))
    if(choice>0 and choice<4 ):
        break
    else:
        print("Invalid Input.")
        continue
        
if (choice==1):
    terms = 0
    while True:
        terms = int(input("Enter the number of terms: "))
        if(terms>=0):
            print(f"Fibonacci series ({terms} terms): {generate_fibonacci_by_terms(terms)}")
            break
        else:
            print("Invalid Input.")
            continue