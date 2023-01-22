from collections import deque


n, m = map(int, input().split())
graph = []

for _ in range(n):
    graph.append(list(map(int, input())))

def bfs(x, y):
    dx = [1, 0, 0, -1]  #우, 하, 상, 좌
    dy = [0, 1, -1, 0]

    queue = deque()
    queue.append((x, y))

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or ny < 0 or nx >= n or ny >= m:  #범위 벗어났을 때
                continue

            if graph[nx][ny] == 0:   #벽일때
                continue

            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y] + 1
                queue.append((nx, ny))

bfs(0, 0)
print(graph[n-1][m-1])
