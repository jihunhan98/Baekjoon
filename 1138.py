n = int(input())
n_height = list(map(int, input().split()))  #[2, 1, 1, 0] => 내 왼쪽에 나보다 큰 사람의 수
n_position = [11 for _ in range(n)]   #현재는 [11, 11, 1, 11] => 가장 키가작은 1만 배치된 상태

n_position[n_height[0]] = 1


for i in range(1, n):
    # i는 키가 2인 사람
    j = n-1 #j는 사람 i가 위치해야할 위치의 인덱스
    while True:
        cnt = 0
        for k in range(j-1, -1, -1): #j를 맨 오른쪽부터 위치하고 왼쪽에 i보다 큰 사람을 찾는다
            if n_position[k] > i: #만약 키가 i보다 크면
                cnt += 1  #cnt증감
        if cnt == n_height[i]:
            n_position[j] = i+1
            break
        else:
            j -= 1


for i in n_position:
    print(i, end= ' ')
