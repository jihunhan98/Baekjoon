from collections import deque
import sys
sys.setrecursionlimit(10**6)    #재귀함수 limit 늘려줘야 오류 안남.

def bfs(x, y):  #재귀함수로 풀어야함.
    if x < 0 or y < 0 or x >= n or y >= m:      #지정범위 벗어나면 -1
        return -1

    if visited[x][y] == True:       #방문했던 거라면 -1
        return -1

    if graph[x][y] == 0:        #배추가없다면 -1
        return -1

    if graph[x][y] == 1:        #배추가 있다면 bfs로 근접해있는 모든 배추에 방문
        visited[x][y] = True
        bfs(x+1, y) #우
        bfs(x-1, y) #좌
        bfs(x, y+1) #상
        bfs(x, y-1) #하
        return 1

t = int(input())

for _ in range(t):
    m, n, k = map(int, input().split())   #m:가로, n:세로, k:배추(1)의 개수
    graph = []
    visited = []
    cnt = 0

    for i in range(n):      #그래프 및 방문 리스트 초기화
        graph.append([0 for _ in range(m)])
        visited.append([False] * m)

    for _ in range(k):      #배추가 있는 곳은 그래프에 1로 채워줌
        x, y = map(int, input().split())
        graph[y][x] = 1


    for i in range(n):      #모든 지점을 bfs로 순회
        for j in range(m):
            if bfs(i, j) == 1:
                cnt += 1

    print(cnt)

