import sys          #recursion 에러남.
sys.setrecursionlimit(10**6)

def bfs(x, y, rain):

    if x < 0 or x >= n or y < 0 or y >= n:  #영역을 벗어나면
        return False

    if visited[x][y]:   #이미 방문을 했다면
        return False

    visited[x][y] = True    #나머지 경우는 방문처리

    if graph[x][y] <= rain:  #만약 범람하면 return False
        return False

    if graph[x][y] > rain:  #만약 범람하지 않으면, bfs로 영역을 넓혀나감. 그리고 마지막에 return True
        bfs(x - 1, y, rain)
        bfs(x + 1, y, rain)
        bfs(x, y-1, rain)
        bfs(x, y+1, rain)

        return True

n = int(input())
graph = []

max_height = 0      #max_height=> 영역의 높이 중 가장 높은

for i in range(n):  #graph와 영역의 높이의 최댓값 초기화
    graph.append(list(map(int, input().split())))
    if max_height < max(graph[i]):
        max_height = max(graph[i])


max_count = 0   #이게 정답(범람하지 않은 영역의 수)
for rain in range(max_height):   #영역의 최댓값까지 비가 오는 높이를 늘려가며 최댓값 도출
    visited = []    #visited는 rain을 늘려가면서 초기화해줘야함.

    for _ in range(n):
        visited.append([False] * n)

    cnt = 0     # 해당 rain일때의 범람하지 않은 영역
    for i in range(n):
        for j in range(n):
            if bfs(i, j, rain):
                cnt += 1

    #최댓값 업데이트
    if max_count < cnt:
        max_count = cnt


print(max_count)


