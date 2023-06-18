n = int(input())

def main():
    ans = 100
    for i in range(0, 101, 5):
        if abs(n - ans) > abs(n - i):
            ans = i
    print(ans)

if __name__ == "__main__":
    main()