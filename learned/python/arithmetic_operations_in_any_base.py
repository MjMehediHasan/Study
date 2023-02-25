def add(a, b, base):
    # Add two numbers in any base
    result = ""
    carry = 0
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    while a or b or carry:
        digit_a = a % base
        digit_b = b % base
        digit_sum = digit_a + digit_b + carry
        if digit_sum >= base:
            carry = 1
            digit_sum -= base
        else:
            carry = 0
        result = digits[digit_sum] + result
        a //= base
        b //= base
    return result

def subtract(a, b, base):
    # Subtract two numbers in any base
    result = ""
    borrow = 0
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    while a or b:
        digit_a = a % base
        digit_b = b % base
        digit_diff = digit_a - digit_b - borrow
        if digit_diff < 0:
            borrow = 1
            digit_diff += base
        else:
            borrow = 0
        result = digits[digit_diff] + result
        a //= base
        b //= base
    return result

def multiply(a, b, base):
    # Multiply two numbers in any base
    result = 0
    power = 0
    while b != 0:
        digit = b % base
        product = digit * a
        result += product * (base ** power)
        power += 1
        b //= base
    return result

def divide(a, b, base):
    # Divide two numbers in any base
    quotient = ""
    remainder = 0
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for digit in str(a):
        dividend = remainder * base + digits.index(digit)
        quotient_digit = dividend // b
        remainder = dividend % b
        quotient += digits[quotient_digit]
    return quotient, digits[remainder]


print("Enter Number, Base, Expected number base :")
base_number, base, convert_to = map(int, input().split())
ans = ""
while (base_number):
    b, r = divide(base_number, convert_to, base)
    ans += ("0" if r else "1")
    base_number = b
print(ans)
