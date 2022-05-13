def merge_sort(array):
    if len(array) <= 1:
        return array
    mid = len(array) // 2
    left = merge_sort(array[:mid])
    right = merge_sort(array[mid:])

    i, j, k = 0, 0, 0
    arr = []

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr.append(left)
            i += 1
        else:
            arr.append(right[j])
            j += 1

    arr += left[i:]
    arr += right[j:]

    return arr

N = int(input())
arr = []

for _ in range(N):
    arr.append(int(input()))

arr = merge_sort(arr)

for i in arr:
    print(i)