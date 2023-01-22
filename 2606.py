from collections import deque

def bfs():
    cnt = 0
    queue = deque([1]) #시작점은 1번 컴퓨터
    visited[1] = True

    while queue:
        v = queue.popleft()
        cnt += 1 #바이러스 걸린 컴퓨터

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

    print(cnt-1)  #1번컴퓨터는 미포함

n = int(input())
m = int(input())
graph = [[] for _ in range(n+1)]
visited = [False] * (n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

bfs()
