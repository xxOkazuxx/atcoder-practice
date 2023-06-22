def main():
    n = int(input())
    mountains = []
    for _ in range(n):
        s, t = map(str, input().split())
        t = int(t)
        mountains.append([t, s])
        mountains.sort(reverse=True)
    print(mountains[1][1])
        

if __name__ == "__main__":
    main()