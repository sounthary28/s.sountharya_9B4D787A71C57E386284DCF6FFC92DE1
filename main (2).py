# Input from the user
year = int(input("Enter a year: "))

# Check if it's a leap year
if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    # Leap year conditions:
    # 1. If the year is divisible by 4, but not by 100, it's a leap year.
    # 2. If the year is divisible by 400, it's a leap year.
    print(f"{year} is a leap year.")
else:
    print(f"{year} is not a leap year.")
