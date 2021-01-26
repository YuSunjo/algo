n, m, k = map(int, input().split())

data = list(map(int , input().split()))

data.sort()
result = 0

first = data[-1]
second = data[-2]

while True:
  if m == 0: 
    break
  for i in range(k):
    if m == 0:
      break
    result += first
    m -= 1
  result += second
  m -= 1
  

print(result)

