# Program to convert temperature from Fahrenheit to Celsius

# Getting temperature in Fahrenheit
f = float(input("Enter temperature in Fahrenheit: "))

# Converting to Celsius using the formula C = 5/9 * (f - 32)
c = (5/9) * (f - 32)

# Printing the result
print(f"Temperature in Celsius: {c:.2f}")