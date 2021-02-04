def factorialEx(num):
  if num <= 1:
    return 1
  else:
    return num * factorialEx(num-1)

