def bubble_sort(list):
    end = len(list) - 1
    while end > 0:
        last_swap = 0
        for i in range(end):
            if list[i] > list[i+1]:
                list[i], list[i+1] = list[i+1], list[i]
                last_swap = i
        end = last_swap
    return list

def time(list):
    sum = 0
    for i in range(len(list)):
        person = 0
        for j in range(i+1):
            person += list[j]
        sum += person
    return sum

N = int(input())
P = list(map(int, input().split()))
sort_P = bubble_sort(P)
sum_time = time(sort_P)

print(sum_time)
