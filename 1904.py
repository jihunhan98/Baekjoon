import sys
sys.setrecursionlimit(10**6)

def get_tile(n):
    if n == 1:
        return 1

    if data[n] != 0:
        return data[n]


    data[n] = get_tile(n - 1) + (n // 2)



n = int(input())

data = [0 for _ in range(n+1)]

data[0] = 0
data[1] = 1
data[2] = 2

get_tile(n)
print(data[n] % 15746)