chess = []

# 6X6 체스판 생성
for _ in range(6):
    chess.append([False]*6)

ans = "Valid"


for i in range(36):
    spot = input()

    x = ord(spot[0]) - 65
    y = int(spot[1])-1

    # 시작점일때
    if i == 0:
        start_spot = [x, y]
        before_spot = [x, y]
        chess[x][y] = True

    #그 이외일때
    else:
        x1, y1 = before_spot[0], before_spot[1]
        sum = abs(x-x1) + abs(y-y1)

        #나이트는 어떤 방향이든 3칸 가야함.
        if sum != 3:
            ans = "Invalid"

        #나이트는 2, 1로만 이동이 가능함.

        if abs(x-x1) == 3 or abs(y-y1) == 3:
            ans = "Invalid"

        #이미 갔던 곳이라면 Invalid
        if chess[x][y] == True:
            ans = "Invalid"

        chess[x][y] = True
        before_spot = [x, y]

#마지막 지점에서 다시 시작 지점으로 돌아가야함.
x, y = start_spot[0], start_spot[1]
x1, y1 = before_spot[0], before_spot[1]
sum = abs(x-x1) + abs(y-y1)

if sum != 3:
    ans = "Invalid"

if abs(x - x1) == 3 or abs(y - y1) == 3:
    ans = "Invalid"

#False가 하나라도 있다면 Invalid
for i in range(6):
    for j in range(6):
        if chess[i][j] == False:
            ans = "Invalid"

print(ans)