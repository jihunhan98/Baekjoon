#브루트포스(모든 경우의수 다 비교하면서 최적의 해 도출)
s1, s2, s3 = map(int, input().split())

cnt_list = [0 for _ in range(s1 + s2 + s3 + 1)] #주사위의 합을 더한 것을 저장함.

for i in range(1, s1+1):    #주시위1이 나올 경우의 수 i ex) 1,2,3,4
    for j in range(1, s2+1):  #주시위2가 나올 경우의 수 j ex) 1,2,3,4
        for k in range(1, s3+1): #주시위3이 나올 경우의 수 k ex) 1,2,3,4
            cnt_list[i+j+k] += 1  #3개의 주사위가 나온 숫자의 합을 cnt_list에 증감시켜줌

cnt_max = max(cnt_list)     #맥스값 찾아서 합이 가장 작은 거 추출
for i in range(len(cnt_list)):
    if cnt_max == cnt_list[i]:
        print(i)
        break