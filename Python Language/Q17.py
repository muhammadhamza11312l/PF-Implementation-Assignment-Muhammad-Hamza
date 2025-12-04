# Program to separate integral and fractional parts

# The number given
number = 15.58971

# Getting the integral part using int() casting
integral_part = int(number)

# Getting the fractional part by subtracting the integer part
fractional_part = number - integral_part

print(f"Original Number: {number}")
print(f"Integral part: {integral_part}")
print(f"Fractional part: {fractional_part}")