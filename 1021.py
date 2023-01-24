n, m = map(int. input().split())

pop_index = list(map(int, input()))

cnt = 0
for i in len(pop_index):
    if pop_index[i] <= n // 2:
        space = pop_index[i]
        cnt = cnt + space

        


