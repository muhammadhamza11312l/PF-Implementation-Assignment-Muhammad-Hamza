# Program to find the maximum number from four numbers

print("Enter four numbers:")
# Getting 4 numbers
n1 = float(input("Number 1: "))
n2 = float(input("Number 2: "))
n3 = float(input("Number 3: "))
n4 = float(input("Number 4: "))

# Using Python's built-in max() function to find the largest
maximum_num = max(n1, n2, n3, n4)

# Printing the result
print(f"The maximum number is: {maximum_num}")