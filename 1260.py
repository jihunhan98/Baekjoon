from collections import deque

def bfs(graph, started, visited):
    queue = deque([started])
    visited[started] = True

    while queue:
        v = queue.popleft()
        print(v, end=' ')

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

def dfs(graph, v, visited):
    visited[v] = True
    print(v, end = ' ')

    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)

n, m, v = map(int, input().split())
graph = [[] for i in range(n+1)]

for i in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

for i in range(len(graph)):
    graph[i].sort()

visited = [False] * (n+1)
dfs(graph, v, visited)
print()
visited = [False] * (n+1)
bfs(graph, v, visited)
