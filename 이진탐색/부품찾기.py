# import sys

# # N = int(input())
# # array = list(sys.stdin.readline().rstrip().split())

# # M = int(input())
# # thing = list(sys.stdin.readline.rstrip().split())

# N = int(input())
# array = list(map(int, input().split()))
# array.sort()

# M = int(input())
# thing = list(map(int, input().split()))

# def binary_search(array, target, start, end):
#   if start > end:
#     return None
#   mid = (start + end) //2
#   if array[mid] == target:
#     return mid
#   elif array[mid] > target:     # 미드가 끝이 미드
#     return binary_search(array, target, start, mid - 1)
#   else:
#     return binary_search(array, target, mid+1, end)

# for i in thing:
#   result = binary_search(array, i, 0, N-1)
#   if result == None:
#     print("no", end=" ")
#   else:
#     print("yes", end=" ")

###########################입력받기를 sys를 사용###############################

# import sys

# N = int(input())
# array = list(map(int, sys.stdin.readline().rstrip().split()))
# array.sort()

# M = int(input())
# thing = list(map(int, sys.stdin.readline().rstrip().split()))
# thing.sort()

# # def binary_search(array, target, start, end):
# #   if start > end:
# #     return None
# #   mid = (start + end) // 2
# #   if array[mid] == target:
# #     return mid
# #   elif array[mid] > target:
# #     return binary_search(array, target, start, mid - 1)
# #   else:
# #     return binary_search(array, target, mid +1, end)

# def binary_search(array, target, start, end):
#   while start <= end:
#     mid = (start + end) // 2
#     if array[mid] == target:
#       return mid
#     elif array[mid] > target:
#       end = mid -1
#     else:
#       start = mid +1

# for i in thing:
#   result = binary_search(array, i, 0, N-1)
#   if result == None:
#     print('no')
#   else:
#     print('yes')


# 다른 방법

# N = int(input())
# array = list(map(int, input().split()))                 # [2, 3, 7, 8, 9]
# array.sort()

# M = int(input())
# things = list(map(int, input().split()))                 # {5, 7, 9}
# things.sort()

# for thing in things:
#   if thing in array:
#     print('yes', end=' ')
#   else:
#     print('no', end=' ')

