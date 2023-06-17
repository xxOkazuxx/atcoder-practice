A = list(map(int, input().split()))

def main():
    for i in range(4):
        if A[i] == A[i + 1]:
            print("YES")
            return
    print("NO")
    
if __name__ == "__main__":
    main()