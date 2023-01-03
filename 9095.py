import math

t = int(input())

for _ in range(t):
    n = int(input())
    total_count = 0
    max_1 = n // 1
    max_2 = n // 2
    max_3 = n // 3
    k = 0

    for cnt2 in range(max_2 + 1):
        for cnt3 in range(max_3 + 1):
            cnt1 = n - (cnt2 * 2) - (cnt3 * 3)  #2와 3의 조합을 뺀 나머지는 모두 1로
            if cnt1 < 0:
                break
            if cnt1 > 0:
                k += 1
            if cnt2 > 0:
                k += 1
            if cnt3 > 0:
                k += 1

            total_count += math.perm(cnt1+cnt2+cnt3) / (math.perm(cnt1) * math.perm(cnt2) * math.perm(cnt3))

    print(int(total_count))





