#************** 절단기의 높이는 최대 10억  -> 큰수는 이진 탐색 고려

n, m = map(int, input().split())

array = list(map(int, input().split()))

start = 0
end = max(array)

# result = 0
# while start <= end:
#   total = 0
#   mid = (start + end) //2
#   for i in array:
#     if i > mid:
#       total = total + (i - mid)
#   if total == m:
#     result = mid
#   elif total > m:
#     start = mid + 1
#   else:
#     end = mid - 1

result = 0
while start <= end:
  total = 0
  mid = (start+ end) //2
  for x in array:
    if x > mid:
      total += x - mid
  if total < m:
    end = mid -1
  else:
    result = mid
    start = mid + 1

print(result)