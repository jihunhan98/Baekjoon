w, h, x, y, p = map(int, input().split())
sum = 0

r = h // 2 #원의 반지름

for _ in range(p):
    a, b = map(int, input().split())

    #직사각형 안에 있을 때
    if a >= x and a <= x+w and b >= y and b <= y+h:
        sum += 1

    #오른쪽 원에 있을 때 원의 방정식으로 넣어 음수거나 같으면 원 안에, 양수면 원 밖에 있는 거

    elif (a-(x+w)) ** 2 + (b - (y+r)) ** 2 - r**2 <= 0:
        sum += 1

    #왼쪽 원에 있을 때 원의 방정식으로 넣어 음수거나 같으면 원 안에, 양수면 원 밖에 있는 거
    elif (a-(x)) ** 2 + (b - (y+r)) ** 2 - r**2 <= 0:
        sum += 1

print(sum)


