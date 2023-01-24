n = int(input())
data = list(map(int, input().split()))

data.sort()

dict = {}

for i in data:
    if dict.get(i) == None:
        print(i, end = ' ')
        dict[i] = True

