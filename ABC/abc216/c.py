n = int(input())

def a(a):
    ans = a - 1
    return ans
def b(b):
    ans = b // 2
    return ans

ans = []
while n > 0:
    if n % 2 == 0:
        n = b(n)
        ans.append('B')
    else:
        n = a(n)
        ans.append('A')
print(''.join(ans[::-1]))