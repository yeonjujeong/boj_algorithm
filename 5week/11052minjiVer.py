N = int(input())

card = [0] + list(map(int, input().split()))
price = [0] * (N+1)
price[1] = card[1]
for i in range (2, N+1):
    for j in range(1, i+1):
        if price[i] < price[i-j] + card[j]:
            price[i] = price[i-j] + card[j]

print(price[N])
