# n = int(input())
#
# mean_score = [] #사람의 평균점수
# for i in range(n):
#     mean_score.append(float(input()))
#
# m = 1 #사람의 수
# i = 0 #mean_Score 인덱스
#
# score = format(1/2, '.3f')
#
#
# while True: #질문 하나씩 비교(mean_score[i])
#     check = False
#
#     if i == n:
#         print(m)
#         break
#
#     sum_list = [k for k in range(10*m+1)]
#
#     for sum in sum_list:
#         score = round(float(sum/m), 3)
#         print(score)
#         if mean_score[i] == score:
#             check = True
#             break
#
#     if check:
#         i += 1
#     else: #초기화
#         m += 1
#         i = 0
#

import math

print(math.floor(0.003231))