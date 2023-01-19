n = int(input())

data = []

for _ in range(n):
    data.append(int(input()))

data.sort()

i = 0
max = 0

while i < len(data):
    j = i

    #j는 i랑의 차이가 5 이하인지, 포인트를 집어줌.
    while j < len(data):
        if data[j] - data[i] < 5:
            j += 1
        else:
            break

    cnt = j-i
    if max < cnt:
        max = cnt

    i = i + 1

print(5 - max)