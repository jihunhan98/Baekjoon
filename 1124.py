import math
a, b = map(int, input().split())
n_list = [True for i in range(b+1)]
n_list[0] = False
n_list[1] = False

# 에라토스테네스의 체 알고리즘
for i in range(2, int(math.sqrt(b)) + 1):
    if n_list[i] == True:
        j = 2
        while i * j <= b:
            n_list[i * j] = False
            j += 1

for 