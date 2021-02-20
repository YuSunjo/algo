# def fibo(x):
#     if x == 1 or x == 2:
#         return 1
#     return fibo(x-1) + fibo(x-2)

# 이렇게 작성하면 n이 커질 수록 수행 시간이 기하급수적으로 늘어남


# 메모제이션 기법(캐싱) - 한 번 구한 결과를 메모리 공간에 메모해두고 같은 식을 다시 호출하면 메모한 결과를 그대로 가져옴
# 탑다운 형식
d = [0] * 100

def fibo(x):
    if x == 1 or x == 2:
        return 1
    # 이미 계산한 적 있으면 그대로 반환
    if d[x] != 0:
        return d[x]
    # 아직 계산하지 않은 문제라면 점화식에 따라서 피보나치 결과 반환
    d[x] = fibo(x-1) + fibo(x-2)
    return d[x]

print(fibo(4))

# 보텀업 방식
# d = [0] * 100
#
# d[1] = 1
# d[2] = 1
# n = 99
#
# for i in range(3, n+1):
#     d[i] = d[i-1] + d[i-2]

