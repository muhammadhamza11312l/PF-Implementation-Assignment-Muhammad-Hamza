# Program to calculate Area and Circumference of a circle

import math

radius = float(input("Enter the radius of the circle: "))

# Formulas
# Area = pi * r^2
area = math.pi * (radius ** 2)
# Circumference = 2 * pi * r
circumference = 2 * math.pi * radius

print(f"Area: {area:.2f}")
print(f"Circumference: {circumference:.2f}")