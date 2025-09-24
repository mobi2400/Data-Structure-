# Algorithm
## Euclideans
- The Euclidean algorithm is a fast and efficient method for finding the greatest common divisor (GCD) of two integers. The GCD is the largest number that divides two other numbers without leaving a remainder.
### What It Is
- Core Principle: The algorithm is based on the principle that the greatest common divisor of two numbers does not change if the larger number is replaced by its remainder when divided by the smaller number.
## Where It Is Used
Simplifying Fractions: Its most basic use is to simplify fractions. For a fraction like 24/54, you find the GCD of 24 and 54 (which is 6), then divide both the numerator and denominator by 6 to get the simplified fraction 4/9.
# NOTE WHILE SOLVING PROBLEM
- while checking for prime number or divisor iterate tille sqrt(n) and not n
    - Better time and space complexity
    - check all the cases
    - ```i<=sqrt(n)```
- Always take care of the range of n 
    - use INT_MAX and INT_MIN to check the range
