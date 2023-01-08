# from math import pow
#
# a, b = input().split()
#
# decimal_a = 0
# decimal_b = 0
#
# #10진수로 변환 후
# for i in range(len(a)-1, -1, -1):
#     if a[i] == '1':
#         decimal_a += pow(2, len(a)-1-i)
#
# for i in range(len(b)-1, -1, -1):
#     if b[i] == '1':
#         decimal_b += pow(2, len(b)-1-i)
#
# #10진수 변환한거 더해준다음
# decimal_sum = decimal_a + decimal_b
# binary_sum = "1" #애는 무조건 1로시작함
# i = 0
#
# #이진수는 1로시작하고, 그에 맞는 자릿수 구하는거
# while pow(2, i) < decimal_sum:
#     i += 1
# i -= 1
# decimal_sum -= pow(2, i)
#
# #그래서 거듭제곱을 0까지 하나씩 줄여가면서 거듭제곱값이 나머지보다 크면 0, 작거나 같으면 1. 이 과정을 0에 자리까지
# while decimal_sum != 0:
#     i -= 1
#     if pow(2, i) > decimal_sum:
#         binary_sum += "0"
#     else:
#         decimal_sum -= pow(2, i)
#         binary_sum += "1"
#
# #남은 수는 0으로 채움
# for j in range(i, 0, -1):
#     binary_sum += "0"
#
# print(binary_sum)
#위에 코드는 십진수로 변환 후 덧셈 후 이진수로 다시 변환하는 코드인데 시간초과. 그러므로 문자열로 인덱싱해서 풀어야함.

a, b = input().split()

if len(a) > len(b):
    b = "0" * (len(a) - len(b)) + b
else:
    a = "0" * (len(b) - len(a)) + a

check = 0
binary_sum = ""

for i in range(len(a)-1, -1, -1):
    sum = int(a[i]) + int(b[i]) + check
    if sum == 3:
        binary_sum = "1" + binary_sum
        check = 1
    if sum == 2:
        binary_sum = "0" + binary_sum
        check = 1
    if sum == 1:
        binary_sum = "1" + binary_sum
        check = 0
    if sum == 0:
        binary_sum = "0" + binary_sum
        check = 0

if check == 1:
    binary_sum = "1" + binary_sum

#이진수는 0으로 시작할 수 없음. 하지만 00 + 00 = 0이 나와야함. 즉 0은 0으로 해야하므로 0일때까지 반복문
while binary_sum[0] == '0':
    if binary_sum =='0':
        break
    binary_sum = binary_sum[1:]

print(binary_sum)