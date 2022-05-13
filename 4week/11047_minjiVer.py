import sys

n, k = map(int, sys.stdin.readlin().split())
coins = []
for _ in range(n):
    coins.append(int(sys.stdin.readline().rstrip()))
coins.sort(reverse=True)

cnt = 0

for coin in coins:
    if coin <= k:
        cnt += k//coin
        k %= coin
    if k == 0:
        break

print(cnt)