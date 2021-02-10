
## 내 방식대로 풀면 count를 리턴받을 방법이...
# n = int(input())

# graph = []
# for i in range(n):
#   graph.append(list(map(int, input())))

# danji = []

# def dfs(x, y, count):
#   if x<0 or x >= n or y<0 or y >=n:
#     return False
#   if graph[x][y] == 1:
#     count = count +1
#     dfs(x-1, y, graph[x][y])
#     dfs(x+1, y, graph[x][y])
#     dfs(x, y-1, graph[x][y])
#     dfs(x, y+1, graph[x][y])
#     return True
#   return False


# result = 0
# for i in range(n):
#   for j in range(n):
#     if dfs(i,j,0) != False:
#       danji.append(dfs(i,j,0))
#       result +=1

# print(result)
# danji.sort()
# for i in range(len(danji)):
#   print(danji[i])


#### 답지


# def dfs(x, y):
#   global count
#   if x <= -1 or x >= n or y <=-1 or y >=n:
#     return False
#   if graph[x][y] ==1:
#     count +=1
#     graph[x][y] =0
#     dfs(x-1,y)
#     dfs(x,y-1)
#     dfs(x+1,y)
#     dfs(x, y+1)
#     return True
#   return False

# n = int(input())
# graph = []
# for i in range(n):
#   graph.append(list(map(int, input().strip())))

# result = 0
# danji = []
# count = 0

# for i in range(n):
#   for j in range(n):
#     if dfs(i,j) == True:
#       result +=1
#       danji.append(count)
#       count =0

# print(result)
# danji.sort()
# for d in danji:
#   print(d)


  
