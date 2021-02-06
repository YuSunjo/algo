# from collections import deque

# n, m = map(int, input().split())

# graph = []
# for i in range(n):
#   graph.append(list(map(int, input())))

# check = [[False]* m for _ in range(n)]


# def bfs(x, y):
#   count = 0
#   queue = deque([0][0])
#   if x <= -1 or x >= n or y <= -1 or y >= m:
#     return False
#   if graph[x][y] == 1 and check[x][y] == False:
#     bfs(x+1, y)
    

from collections import deque

# 오 왼 아 위
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

n, m = map(int, input().split())
graph = []
for i in range(n):
  graph.append(list(map(int, input())))

q = deque()
check = [[False]* m for _ in range(n)]
dist = [[0]*m for _ in range(n)]

q.append((0,0))
check[0][0] = False
dist[0][0] = 1    # 최단경로 수 

while q:
  x, y = q.popleft()
  for k in range(4):
    nx, ny = x = dx[k], y + dy[k]
    if 0 <= nx < n and 0 <= ny < m:
      if check[nx][ny] == False and graph[nx][ny] == 1:
        q.append((nx,ny))
        dist[nx][ny] = dist[x][y] +1
        check[nx][ny] = True

print(dist[n-1][m-1])