# Program to compute the discriminant

a = float(input("Enter value for a: "))
b = float(input("Enter value for b: "))
c = float(input("Enter value for c: "))

# Formula: disc = b^2 - 4ac
# In Python, ** is the exponent operator
disc = (b ** 2) - (4 * a * c)

print(f"The discriminant is: {disc}")