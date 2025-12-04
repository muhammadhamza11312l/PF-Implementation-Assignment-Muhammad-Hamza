# Program to calculate Total and Average marks

# Getting Roll Number
roll_no = input("Enter Student Roll No: ")

# Getting marks for three subjects
prog_fund = float(input("Enter marks for Programming Fundamentals: "))
intro_comp = float(input("Enter marks for Intro to Computing: "))
comp_graph = float(input("Enter marks for Computer Graphics: "))

# Calculating Total
total_marks = prog_fund + intro_comp + comp_graph

# Calculating Average (Total divided by 3)
average_marks = total_marks / 3

# Printing the Report
print("\n--- Student Result ---")
print(f"Roll No: {roll_no}")
print(f"Total Marks: {total_marks}")
print(f"Average Marks: {average_marks:.2f}") # .2f rounds to 2 decimal places