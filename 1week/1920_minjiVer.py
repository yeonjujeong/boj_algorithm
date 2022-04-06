N = int(input())
number = list(map(int, input().split()))
number.sort()

M = int(input())
number_exist = list(map(int, input().split()))

for i in range(M):
    flag = 0
    start = 0
    end = N-1
    while start <= end:
        mid = (start + end) // 2
        if number[mid] == number_exist[i]:
            flag = 1
            break
        elif number_exist[i] > number[mid]:
            start = mid + 1
        else:
            end = mid - 1
    print(flag)