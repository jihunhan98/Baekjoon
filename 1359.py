# A와 B는 서로 1부터 n까지 총 n개의 수가 있다. 그 중 m개를 뽑는데 그 중 적어도 k개 같을 확률을 구하여라.

from math import comb

n, m, k = map(int, input().split())
sum = 0

for i in range(k): # k는 예를들어 적어도 2개 이상이면 0개가 같을 때, 1개가 같을 때를 뜻함. 후에 여집합으로 구해줌
    sum = sum + comb(m, i) * comb(n-m, m-i)

sum = comb(n, m) - sum

print(sum / comb(n, m))

