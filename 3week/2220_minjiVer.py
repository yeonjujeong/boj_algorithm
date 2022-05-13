n = int(input())
heap = [0, 1]

def swap(arr, x, y):
    temp = arr[x]
    arr[x] = arr[y]
    arr[y] = temp

for i in range(2, n+1):
    heap.append(i)
    swap(heap, i, i-1)
    j = i - 1
    while j != 1:
        swap(heap, j, j/2)
        j = j/2

for i in heap[1:]:
    print(i, end=' ')