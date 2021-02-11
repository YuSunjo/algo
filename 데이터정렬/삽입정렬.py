# 삽입 정렬은 특정한 데이터를 적절한 위치에 '삽입'한다는 의미에서 삽입정렬 이라고 부른다.
 
array = [7,5,9,0,3,1,6,2,4,8]

for i in range(1, len(array)):
  for j in range(i, 0, -1):
    if array[j] < array[j-1]:
      array[j], array[j-1] = array[j-1], array[j]
    else:
      break