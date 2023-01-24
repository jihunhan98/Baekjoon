t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    score = list(map(int, input().split()))
    find_index = m      #내가 몇번째 인쇄인지 궁금한 페이지의 인덱스
    cnt = 0     #출력한 횟수

    while True:
        if score.index(max(score)) != 0:    #만약 맨 앞의 점수가 최댓값이 아니라면
            score.append(score.pop(0))      #맨 앞을 pop후 맨 뒤로 미룸

            if find_index == 0:     #만약 내가 찾는 인쇄물의 인덱스가 0이면 맨 뒤로
                find_index = len(score)-1
            else:       #그게 아니면 그냥 -1
                find_index -= 1

        else:       #만약 맨 앞의 점수가 최댓값이면
            cnt += 1        #무조건 인쇄를 하므로 cnt 증감

            if find_index == 0: #만약 인쇄한 게 내가 찾는 인쇄물이라면 break
                break
            else:       #내가 찾는게 아니면 인쇄한 후, 인쇄물의 인덱스를 -1
                score.pop(0)
                find_index -= 1

    print(cnt)