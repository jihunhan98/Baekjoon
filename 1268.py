n = int(input())

data = []
cnt = [0 for _ in range(n)]
for _ in range(n):
    data.append(list(map(int, input().split())))


for i in range(0, len(data)-1): #0부터 n-1까지 하나의 학생(행) 지정(row)
    row = data[i]
    for j in range(i+1, n):  #비교할 학생을 i+1부터 n까지 지정(약간 버블정렬 느낌)
        for k in range(5):   #학생(row)와 학생(j)의 반 비교 후 같으면 증감 후 break
            if row[k] == data[j][k]:
                cnt[i] += 1
                cnt[j] += 1
                break

cnt_max = max(cnt)

for i in range(len(cnt)):
    if cnt_max == cnt[i]:
        print(i+1)
        break


