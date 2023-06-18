n, s = map(int, input().split())
a = list(map(int, input().split()))
p = list(map(int, input().split()))


def main():
    ans = 0
    for i in range(n):
        for j in range(n):
            if a[i] + p[j] == s:
                ans += 1
    print(ans)
                
if __name__ == "__main__":
    main()