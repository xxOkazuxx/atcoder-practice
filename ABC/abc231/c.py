def Nibutan(x: int) -> int:
    # 左端
    l = 0
    # 右端
    r = n - 1
    
    # l < 右端 - 左端の間
    while l < r - 1:
        # 中央
        c = (l + r) // 2
        # a[c] < x ならば（条件を満たさない場合）
        if a[c] < x:
            l = c
        # そうでなければ
        else:
            # 右端を中央へ更新
            r = c
    # 右端を返す
    return r

n, q = map(int, input().split())
a = list(map(int, input().split()))

a.sort()
for i in range(q):
    x = int(input())
    
    if x <= a[0]:
        print(n)
    elif a[n - 1] < x:
        print(0)
    else:
        # 二分探索で位置を特定し、人数を出力
        print(n - Nibutan(x))