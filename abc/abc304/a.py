n = int(input())
name_inputs = []
age_inputs = []
for i in range(n):
    s, a = input().split() 
    name_inputs.append(s)
    age_inputs.append(int(a))

name_inputs *= 2
for i in range(n):
    print(name_inputs[age_inputs.index(min(age_inputs)) + i])