import time

n, q = map(int, input().split())
a = list(map(int, input().split()))

start_time = time.perf_counter_ns()

for i in range(q):
    l, r = map(int, input().split())
    sum = 0
    for j in range(l - 1, r):
        sum += a[j]
    print(sum)

end_time = time.perf_counter_ns()
print('Time = {} MilliSeconds'.format((end_time - start_time) / 1000000))