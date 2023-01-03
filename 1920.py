# Nlog(N)인 파이썬 내장함수 sort로 샘플 리스트 정렬 후
# 탐색해야 할 수는 log(N)인 이진 탐색으로 탐색함.
# Nlog(N) + log(N) = Nlog(N)

import sys

def binary_search(a, x):
    start = 0
    end = len(a) - 1

    while start <= end:
        mid = (start + end) // 2

        if a[mid] < x:
            start = mid + 1
        elif a[mid] > x:
            end = mid - 1
        else:
            return 1

    return 0

n = int(sys.stdin.readline().rstrip())
a = list(map(int, sys.stdin.readline().rstrip().split()))
a.sort()   #nlog(n)의 내장 정렬함수

m = int(sys.stdin.readline().rstrip())

input_list = list(map(int, sys.stdin.readline().rstrip().split()))

for x in input_list:
    print(binary_search(a, x))
