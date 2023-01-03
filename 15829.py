import math

l = int(input())
s = input()
sum = 0

for i in range(l):
    sum = sum + (int(math.pow(31, i)) * (ord(s[i]) - 96))

print(sum)