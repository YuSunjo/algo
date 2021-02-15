import sys

# N = int(input())
# array = list(sys.stdin.readline().rstrip().split())

# M = int(input())
# thing = list(sys.stdin.readline.rstrip().split())

N = int(input())
array = list(map(int, input().split()))
array.sort()

M = int(input())
thing = list(map(int, input().split()))

def binary_search(array, target, start, end):
  if start > end:
    return None
  mid = (start + end) //2
  if array[mid] == target:
    return mid
  elif array[mid] > target:     # 미드가 끝이 미드
    return binary_search(array, target, start, mid - 1)
  else:
    return binary_search(array, target, mid+1, end)

for i in thing:
  result = binary_search(array, i, 0, N-1)
  if result == None:
    print("no", end=" ")
  else:
    print("yes", end=" ")
    