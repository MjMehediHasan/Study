def divide(a, b, base):
    # Divide two numbers in any base
    quotient = ""
    remainder = 0
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for digit in str(a):
        if (digits.index(digit) >= base):
            return -1, -1
        dividend = remainder * base + digits.index(digit)
        quotient_digit = dividend // b
        remainder = dividend % b
        quotient += digits[quotient_digit]

    return quotient, digits[remainder]


if __name__ == "__main__":
    print("Enter Number, Base, Expected number base :")
    base_number, base, convert_to = input().split()
    ans = ""
    compare = "0"*len(base_number)

    while (base_number > compare):
        b, r = divide(base_number, int(convert_to), int(base))
        if (b == -1 and r == -1):
            print("Not Today Brother ! 😉")
            exit()
        ans += r
        base_number = b
    print(ans[::-1])    # MSB -> LSB
