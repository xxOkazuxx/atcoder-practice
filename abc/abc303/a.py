N = int(input())
S = input()
T = input()

ans = 0

for i in range(N):
    if S[i] == T[i]:
        ans += 1
    elif (S[i] == '1' and T[i] == 'l') or (S[i] == 'l' and T[i] == '1'):
        ans += 1
    elif (S[i] == '0' and T[i] == 'o') or (S[i] == 'o' and T[i] == '0'):
        ans += 1

if ans == N:
    print("Yes")
else:
    print("No")
