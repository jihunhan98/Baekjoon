data = list(map(int, input().split()))
distance_list = []

distance_list.append(data[2] - data[0])
distance_list.append(data[3] - data[1])
distance_list.append(data[1] - 0)
distance_list.append(data[0] - 0)

print(min(distance_list))