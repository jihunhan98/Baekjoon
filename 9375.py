t = int(input())

for _ in range(t):
    n = int(input())
    index = 0
    wear_dict = {}  #wear-index
    wear_list = []
    cnt = 1

    for __ in range(n):
        name, wear = input().split()

        if wear_dict.get(wear) == None:
            wear_dict[wear] = index
            index += 1
            wear_list.append([name])
        else:
            wear_list[wear_dict[wear]].append(name)

    for row in wear_list:
        cnt = cnt * (len(row) + 1)
    print(cnt-1)