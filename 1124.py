# import time

a, b = map(int, input().split())
# start_time = time.time()
n= 100000
prime_list = [False,False] + [True]*(n-1)
primes=[]

#에라토스테네스의 체로 소수판별 미리 구현
for i in range(2,n+1):
  if prime_list[i]:
    primes.append(i)
    for j in range(2*i, n+1, i):
        prime_list[j] = False

#161초나옴 ㅋㅋ
# #입력값받고

total_cnt = 0  #a,b사이의 언더프라임 개수
for i in range(a, b+1):  #i는 a부터 b까지
    if prime_list[i]:
        continue

    prime_cnt = 0  #prime_cnt는 소인수분해하였는데 그 수가 소수인 값의 개수
    n = i
    j = 2
    while n > 1: #해당 while문은 소인수분해 부분
        if n % j == 0:  #j가 나누어 떨어지는데
            if prime_list[j]:   #그 j가 소수이면
                prime_cnt += 1  #prime_cnt 증감
            n = n // j #n은 j로 나누고
            j = 2  # j는 다시 2부터 시작
        else:
            j += 1

    #소인수분해 후 소수들의 개수가 소수이면 해당 i는 언더프라임임.
    if prime_list[prime_cnt]:
        total_cnt += 1

# end_time = time.time()
# print(end_time - start_time)
print(total_cnt)

