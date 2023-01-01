#data[0]: N(운동시간)
#data[1]: m(최소 맥박)
#data[2]: M(최대 맥박)
#data[3]: T(운동 시 맥박 증가량)
#data[4]: R(휴식 시 맥박 감소량)
#초기맥박: m
data = list(map(int, input().split()))
pulse = data[1]
time = 0
exercise = 0

while True:
    time += 1

    if data[2] - data[1] < data[3]:
        print(-1)
        break

    if pulse + data[3] <= data[2]:
        exercise += 1
        pulse += data[3]
    elif pulse - data[4] < data[1]:
        pulse = data[1]
    else:
        pulse -= data[4]

    if exercise == data[0]:
        print(time)
        break
