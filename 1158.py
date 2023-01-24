from collections import deque

n, k = map(int, input().split())

data = [{i: False} for i in range(1, n+1)]
print(data)

cnt = 0

while cnt < n:      #모든 리스트 순회
    