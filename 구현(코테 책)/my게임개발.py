n, m = map(int, input().split())

x, y, direct = map(int, input().split())

d = [[0]* m for _ in range(n)]        # 0으로 다채운다.
count = 1
turn_time = 0

dx = [-1, 0, 1, 0]   # 북 동 남 서
dy = [0, 1, 0, -1]

def turn_left():
  global direct
  if direct == 0:
    direct = 3
  else:
    direct -= 1

d[x][y] = 1

array = []
for i in range(n):
  array.append(list(map(int, input().split())))

while True:
  turn_left()
  nx = x + dx[direct]
  ny = y + dy[direct]
  if d[nx][ny] == 0 and array[nx][ny] == 0:
    d[nx][ny] = 1
    x = nx
    y = ny
    count +=1
    turn_time = 0
    continue
  else:
    turn_time +=1
    if turn_time == 4:
      break

print(count)