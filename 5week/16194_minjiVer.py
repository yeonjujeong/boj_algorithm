N = int(input())

card = [10000] + list(map(int, input().split()))
price = [10000] * (N+1)
price[1] = card[1]
for i in range (2, N+1):
    for j in range(1, i+1):
        if price[i] > min(price[i-j] + card[j], card[i]):
            price[i] = min(price[i-j] + card[j], card[i])

print(price[N])
