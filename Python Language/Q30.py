# Program to check if a number is Odd or Even

number = int(input("Enter an integer: "))

# The modulo operator (%) returns the remainder.
# If remainder is 0 when divided by 2, it is Even.
if number % 2 == 0:
    print(f"{number} is Even.")

if number % 2 != 0:
    print(f"{number} is Odd.")