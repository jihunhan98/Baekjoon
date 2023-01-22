from collections import deque

def dfs(graph, v, visited):
    visited[v] = True
    print(v, end = ' ')

    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)



def bfs(graph, started, visited):
    queue = deque([started])
    visited[started] = True

    while queue:
        v = queue.popleft()
        print(v, end= ' ')

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

graph = [[], [2,3,8], [1, 7], [1, 4, 5], [3, 5], [3, 4], [7], [2, 6, 8], [1, 7]]

#방문 여부 리스트
visited = [False] * len(graph)
bfs(graph, 1, visited)