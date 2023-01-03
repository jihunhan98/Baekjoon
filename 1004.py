# 원의 방정식에 좌표 넣고, 음수가 나오면 해당 좌표가 원 안에 있다.
# 하지만 출발점과 도착점 둘다 하나의 원 안에 있으면 원을 안거쳐도 되기에
# 원의 방정식에 출발점과 도착점을 넣고, 둘이 곱한 후 음수가 나오면 하나의 원은 무조건 거쳐야 된다고 판단.

t = int(input())

for _ in range(t):
    cnt = 0
    x1, y1, x2, y2 = map(int, input().split())
    planet_count = int(input())

    for _a in range(planet_count):
        cx, cy, r = map(int, input().split())

        res1 = (cx - x1) ** 2 + (cy - y1) ** 2 - (r ** 2)
        res2 = (cx - x2) ** 2 + (cy - y2) ** 2 - (r ** 2)
        if res1 * res2 < 0:
            cnt += 1
    print(cnt)

