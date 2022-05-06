#include <iostream>
#include <stdlib.h>
int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b) return 1;
    else if(*(int*)a < *(int*)b) return -1;
    else return 0;
}
int main(){
    int n, i;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &i);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    printf("%d\n", arr[i-1]);
    return 0;
}
