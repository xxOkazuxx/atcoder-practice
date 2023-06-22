def main():
    n = int(input())
    a = list(map(int, input().split()))
    setA = set(a)
    print(len(setA))


if __name__ == "__main__":
    main()