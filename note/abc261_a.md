## Intersection(区間の交差)
```
    a <= x <= b
    c <= x <= d
```
に含まれている区間を求めたい

## 結論
```
    l = max(a, c)
    r = min(b, d)
```
として  
l <= rならば、l <= x <= r  
そうでないならば、共通部分なし