n, m = map(int, input().split())

data = []
for _ in range(n):
    data.append(input())

column_check = [False] * n
row_check = [False] * m
cnt_row = 0
cnt_column = 0

#애는 행, 열방향에 채워야 할 애를 구함
for i in range(len(data)):
    for j in range(len(data[0])):
        if data[i][j] == 'X':
            column_check[i] = True

for i in range(len(data[0])): #len(data): 5, len(data[0]): 8
    for j in range(len(data)):
        if data[j][i] == 'X':
            row_check[i] = True

#그래서 다 찾았으면 다 더해줌. (위의 for문에서 진행해도 되는데 귀찮아서 수정 안함)
for i in column_check:
    if i == False:
        cnt_column += 1
for i in row_check:
    if i == False:
        cnt_row += 1

#그래서 그냥 최솟값 구하면 됨
if cnt_column > cnt_row:
    print(cnt_column)
else:
    print(cnt_row)