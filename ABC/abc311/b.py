def find_longest_consecutive(nums):
    if not nums:
        return 0

    longest_streak = 1
    current_streak = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_streak += 1
        else:
            current_streak = 1
        
        longest_streak = max(longest_streak, current_streak)

    return longest_streak

n, d = map(int, input().split())
s = []
for i in range(n):
    si = input()
    s.append(si)
vacation = []
for i in range(d):
    count = 0
    for j in range(n):
        if s[j][i] == 'x':
            break
        else:
            count += 1
    if count == n:
        vacation.append(i + 1)

print(find_longest_consecutive(vacation))