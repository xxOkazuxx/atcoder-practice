#-------------------------------------------------------------------------------------
# 二分探索
# 引数: x  返り値: 「x以上の中で最も小さい数の位置」
#-------------------------------------------------------------------------------------
n = 5
a = [1, 3, 4, 6, 9]
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

# 5を初めて越えるのはあindex(3)
print(Nibutan(5))