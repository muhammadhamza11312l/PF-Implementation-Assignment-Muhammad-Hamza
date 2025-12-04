# Program to interchange values of two variables

x = 10
y = 20

print(f"Before swapping: x = {x}, y = {y}")

# Python allows simultaneous swapping without a temporary variable
x, y = y, x

print(f"After swapping:  x = {x}, y = {y}")