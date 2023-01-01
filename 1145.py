number_list = list(map(int, input().split()))
n = 0
while True:
    n += 1
    cnt = 0
    for number in number_list:
        if n % number == 0:
            cnt += 1
    if cnt >= 3:
        print(n)
        break