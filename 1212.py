from math import pow

n = input()
sum = 0
ans = []

if n == '0':
    print(0)

else:
    for i in range(len(n)):
        sum = sum + int(n[i]) * pow(8, len(n)-1-i)

    while sum > 1:
        if sum % 2 == 1:
            ans.insert(0, 1)
        else:
            ans.insert(0, 0)
        sum = sum // 2
    ans.insert(0, 1)

    for i in ans:
        print(i, end='')