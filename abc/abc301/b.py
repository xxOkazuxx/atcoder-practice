n = int(input())
a = list(map(int, input().split()))
ans = []
# 配列の最初の数を記憶
cnt = a[0]

for i in range(n - 1):
    # 左の数の方が大きい時、差が１になるまで数を挿入
    if (cnt - a[i + 1]) > 1:
        while (cnt - a[i + 1]) > 0:
            ans.append(cnt)
            cnt -=1
    # 右の数の方が大きい時、差が１になるまで数を挿入
    elif (a[i + 1] - cnt) > 1:
        while (a[i + 1] - cnt) > 0:
            ans.append(cnt)
            cnt += 1
    else:
        ans.append(cnt)
        cnt = a[i + 1]
ans.append(cnt)

# 出力用
for i in range(len(ans)):
    print(ans[i], end=" ")
