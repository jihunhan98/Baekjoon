# Read in the numerators and denominators of the two fractions
a, b = map(int, input().split())
c, d = map(int, input().split())

# Calculate the numerator and denominator of the sum
numerator = a * d + b * c
denominator = b * d

# Find the greatest common divisor of the numerator and denominator
while numerator % denominator != 0:
  numerator, denominator = denominator, numerator % denominator

# Divide the numerator and denominator by the GCD to reduce the fraction to its simplest form
numerator //= denominator
denominator //= denominator

# Print the reduced fraction
print(numerator, denominator)