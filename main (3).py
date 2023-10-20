def factorial(n):
  if n == 0:
      # Base case: 0! is defined as 1
      return 1
  else:
      # Recursive case: n! = n * (n-1)!
      return n * factorial(n - 1)

# Input from the user
n = int(input("Enter a non-negative integer: "))

if n < 0:
  print("Factorial is not defined for negative numbers.")
else:
  result = factorial(n)
  print(f"The factorial of {n} is {result}")
