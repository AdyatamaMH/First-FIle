# variable name

name = "Didi Pangkulan"
age = 18

# String
first_name = "didi"
last_name = "pangkulan"

full_name = first_name + " " + last_name
full_name2 = " {} {} ".format(first_name, last_name)
full_name3 = f""

print(full_name)
print(f"Capitalize: {full_name.capitalize()}")
print(f"Title: {full_name.title()}")
print(f"upper: {full_name.upper}")
print(f"swapcase: {full_name.title().swapcase()}")
print(f"isdigit 100: {'100'.isdigit()}")
print(f"isdigit abc: {'abc'.isdigit()}")
print(f"isalpha 100: {'100'.isalpha()}")
print(f"isalpha abc: {'abc'.isalpha()}")

amount = 100
print(f"${amount:.2f}")
print(f"${amount:.3f}")

import math # importing math module
PI = math.pi
print(PI)

# Int

whole_number = 5
# addition
print(f"addition: {1 + 1}")
print(f"substraction: (1-1)")
print(f"multiplication (1 * 1)")
print(f"division (3 / 2)")
print(f"floor division (3 // 2)")

# Increment

n = 5
# n = n + 5
n //= 5
print (n)

# Float

decimal = 1.0
print(type(decimal))
print(int(decimal))
print(type(decimal))
decimal = str(decimal)

# Boolean

n = 5
is_greater_than_5 = n > 5
is_less_than_5 = n < 5
is_greater_than_or_equal_to_5 = n >= 5
is_less_than_or_equal_to_5 = n <= 5

print(is_greater_than_5)
print(is_less_than_5)
print(is_greater_than_or_equal_to_5)
print(is_less_than_or_equal_to_5)

print('Hello World!')
print("Hello World", end=" "
print("Didi Pangkulan", sep="---")

# if [Boolean]
n = 100

if n < 100 :
    print("n is less than 100")
elif n == 100:
    print("n is equal to 100")
else:
    print("n is more than 100")

print(100 == 100) # == equal
print(100 != 100) # != not equal
print(100 > 100) # > greater than
print(100 < 100) # > less than
print(100 >= 100) # > greater than or equal to
print(100 <= 100) # > less than or equal to

n = 25
print(not(n < 25))
print(n > 10 and n < 30)
print(n > 10 or n < 20)
print()