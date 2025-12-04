# Program to calculate Total and Average marks for 5 subjects

# Input marks for 5 subjects
s1 = float(input("Enter marks for Subject 1: "))
s2 = float(input("Enter marks for Subject 2: "))
s3 = float(input("Enter marks for Subject 3: "))
s4 = float(input("Enter marks for Subject 4: "))
s5 = float(input("Enter marks for Subject 5: "))

# Calculation
total = s1 + s2 + s3 + s4 + s5
average = total / 5

print(f"Total Marks: {total}")
print(f"Average Marks: {average}")