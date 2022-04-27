import sys

T = int(input())

for i in range(T):
    N = int(input())
    test_score = []

    for j in range(N):
        a, b = map(int, sys.stdin.readline().split())
        test_score.append([a, b])

    test_score.sort()
    highest_score = test_score[0][1]
    num_pass = 1

    for j in range(1, N):
        if highest_score > test_score[j][1]:
            num_pass += 1
            highest_score = test_score[j][1]

    print(num_pass)
