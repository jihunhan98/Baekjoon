# 1009 시간초과
# t = int(input())
#
# for i in range(t):
#     a, b = map(int, input().split())
#     sum = 1
#     for j in range(b):
#         sum = sum * a
#     print(str(sum)[-1])


#a^b는 b가 몇이든 1의 자리 숫자는 반복적인 형태를 띈다.
#init_check는 1의자리 숫자(0~9)가 반복하는 형태의 리스트를 추가함.
def init_check(n):
    check_list = [0 for k in range(10)]
    number_list = []
    sum = 1

    while True:
        sum = sum * n
        check = int(str(sum)[-1])

        if check_list[check]:
            break
        else:
            number_list.append(check)
            check_list[check] = 1

    return number_list

t = int(input())
number_list = []

for k in range(10):
    number_list.append(init_check(k))
for i in range(t):


    a, b = map(int, input().split())
    n = int(str(a)[-1]) #1의 자리 숫자 추출
    list_length = len(number_list[n])
    if number_list[n][(b % list_length) -1] == 0:
        print(10)
    else:
        print(number_list[n][(b % list_length) -1])