n = list(input())

if len(n) < 4:
    print("".join(n))
else:
    zero = '0' * (len(n) - 3)
    n[3:] = zero
    print("".join(n))