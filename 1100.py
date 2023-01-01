chess_list = []

for i in range(8):
    data = input()
    chess_list.append(data)

white_count = 0

for i in range(len(chess_list)):
    for j in range(len(chess_list[i])):
        if chess_list[i][j] == 'F':
            if (i % 2 == 0) and (j % 2 == 0):
                white_count += 1
            elif (i % 2 == 1) and (j % 2 == 1):
                white_count += 1

print(white_count)