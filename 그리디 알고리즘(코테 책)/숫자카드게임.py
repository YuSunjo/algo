
#내가 푼 문제
# m, n = map(int, input().split())

# min = list()

# for i in range(m):
#   data = list(map(int, input().split()))
#   data.sort()
#   min.append(data[0])

# min.sort()
# print(min[-1])


#답안지
m, n = map(int, input().split())

result = 0

for i in range(m):
  data = list(map(int, input().split()))
  min_value = min(data)

  result = max(min_value, result)

print(result)

