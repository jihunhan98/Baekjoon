#5c2 = 5*4 / 2*1 = 10
#Combination 문제

n, k = map(int, input().split())
sum = 1

for i in range(n, n-k, -1):
    sum = sum * i

for i in range(1, k+1):
    sum = sum // i

print(sum)
