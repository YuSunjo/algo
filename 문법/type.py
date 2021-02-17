# round

# / % //

# 리스트

# 초기화 하기
a = [0]* 10
print(a)

# 리스트의 인덱싱
array = [1,2,3,4,5,6,7,8,9]
print(array[-1])

# 리스트의 슬라이싱 - 두번째 부터 4 번째
print(array[1: 4])

# 리스트 컴프리헨션
array2 = [i for i in range(20)]
# 짝수 표현
array2 = [i for i in range(20) if i % 2 == 1]
print(array2)

# 1 부터 9 까지의 제곱 값을 포함하는 리스트
array2 = [i*i for i in range(1,10)]
print(array2)

# N * M 크기의 2차원 리스트 초기화
n=3
m = 4
array3 = [[0]* m for _ in range(n)]
print(array3)

# remove_set에 포함되지 않은 값만을 저장
a = [1,2,3,4,5,5,5]
remove_set = {3,5}

result = [i for i in a if i not in remove_set]
print(result)

# 문자열

# 튜플

# dictionary


