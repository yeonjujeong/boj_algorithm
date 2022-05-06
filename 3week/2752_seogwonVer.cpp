#include <iostream>

using namespace std;

int arr[3];
int *arr2;

void merge(int left, int right)
{
    int mid = (left + right) / 2;

    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            arr2[k++] = arr[i++];
        else
            arr2[k++] = arr[j++];
    }

    int tmp = i > mid ? j : i;

    while (k <= right)
        arr2[k++] = arr[tmp++];

    for (int i = left; i <= right; i++)
        arr[i] = arr2[i];
}

void partition(int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        partition(left, mid);
        partition(mid + 1, right);
        merge(left, right);
    }
}

int main()
{
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);

    partition(0, 2);

    for (int i = 0; i < 3; i++)
        printf("%d\n", arr[i]);
}
