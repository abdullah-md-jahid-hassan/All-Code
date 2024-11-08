def add(a, b):
    return a+b

def sub(a, b):
    return a-b

def mul(a, b):
    return a*b

def dev(a, b):
    return a/b

first_number = float(input("Enter the 1st number: "))
oparator = input("Enter the oparator: ")
second_number = float(input("Enter the 2nd number: "))

if oparator=="+":
    print("The result is: "+str(add(first_number, second_number)))
elif oparator=="-":
    print("The result is: "+str(sub(first_number, second_number)))
elif oparator=="*":
    print("The result is: "+str(mul(first_number, second_number)))
elif oparator=="/":
    print("The result is: "+str(dev(first_number, second_number)))
else:
    print("Invalid Input.")

