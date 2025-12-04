# Program to convert time into total seconds

hours = int(input("Enter Hours: "))
minutes = int(input("Enter Minutes: "))
seconds = int(input("Enter Seconds: "))

# Calculation: 
# 1 hour = 3600 seconds
# 1 minute = 60 seconds
total_seconds = (hours * 3600) + (minutes * 60) + seconds

print(f"Total time in seconds: {total_seconds}")