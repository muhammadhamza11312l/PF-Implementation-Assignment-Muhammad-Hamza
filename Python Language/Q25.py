# Program to find area of a triangle given three sides

import math

# Input sides
a = float(input("Enter side a: "))
b = float(input("Enter side b: "))
c = float(input("Enter side c: "))

# Calculate semi-perimeter 's'
s = (a + b + c) / 2

# Calculate Area using Heron's Formula: sqrt(s * (s-a) * (s-b) * (s-c))
area = math.sqrt(s * (s - a) * (s - b) * (s - c))

print(f"The area of the triangle is: {area:.2f}")