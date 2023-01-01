#시간초과 코드
# arr = [1, 1]
# check = 1
# cnt = 1
# toggle = True
#
# x = int(input())
#
# while True:
#     if cnt == x:
#         print(str(arr[0]) + "/" + str(arr[1]))
#         break
#
#     if toggle:
#         if arr[1] == check:
#             arr[1] += 1
#             check += 1
#             toggle = not toggle
#         else:
#             arr[0] -= 1
#             arr[1] += 1
#
#     else:
#         if arr[0] == check:
#             arr[0] += 1
#             check += 1
#             toggle = not toggle
#         else:
#             arr[0] += 1
#             arr[1] -= 1
#
#     cnt += 1
#

#n이 홀수면 1/4, 2/3, 3/2, 4/1
#n이 짝수면 3/1, 2/2, 1/3

# x = int(input())  #입력값
# n = 1  # 증감값
# sum = 0
#
# while True:
#
#     if x == 1:
#         print('1/1')
#         break
#
#     sum += n
#     n += 1
#
#     if sum + n >= x:
#         n += 1
#         if n % 2 == 0:
#             data = [n-(x-sum), x-sum]
#         else:
#             data = [ x-sum, n-(x-sum)]
#         break
#         print(data)


n = int(input())

line = 0
end = 0
while n > end:
    line += 1
    end += line

diff = end - n
if line%2 == 0: #짝수 라인 일때
    top = line - diff
    bottom = diff + 1
else:
    top = diff + 1
    bottom = line - diff

print("%d/%d"%(top,bottom))
