N, M = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(M)]
ans = 0

for i in range(1, N + 1):
    for j in range(i + 1, N + 1):
        flag = False
        for k in range(M):
            for l in range(N - 1):
                if A[k][l] == i and A[k][l + 1] == j:
                    flag = True
                if A[k][l] == j and A[k][l + 1] == i:
                    flag = True
        if flag == False:
            ans += 1

print(ans)
