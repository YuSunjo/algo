n = int(input())

array = []
for i in range(n):
  input_data = input().split()
  array.append((input_data[0], int(input_data[1])))

array.sort()
for i in range(n):
  print(array[i][0], end= ' ')

# for i in array:
#   print(i[0], end= ' ')