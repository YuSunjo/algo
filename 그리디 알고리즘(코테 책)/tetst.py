# 거스름돈 

count = 0
coin_type = [500,100,50,10]

n=1260

for coin in coin_type:
  count += n/coin
  n = n%coin

print(count)