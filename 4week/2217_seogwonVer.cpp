#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, tmp;
    int max = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int)*(n+1));
    for(int i=0; i<n; i++) scanf("%d", arr+i);
    sort(&arr[0], &arr[n]);
    for(int i=0; i<n; i++){
        tmp = arr[i] * (n-i);
        if(tmp > max) max = tmp;
    }
    printf("%d\n", max);
    return 0;
}