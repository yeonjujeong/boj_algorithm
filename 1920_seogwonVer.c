#include <stdio.h>
#include <stdlib.h>
int binary_search(int* array, int target, int len);

int compare(const void* a, const void* b){
    if(*(int *)a > *(int *)b) return 1;
    else if(*(int *)a < *(int *)b) return -1;
    else return 0;
}

int main(){
    int N, M;

    scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++) scanf("%d", &array[i]);
    qsort(array, N, sizeof(int), compare);

    scanf("%d", &M);
    int tar_array[M];
    for(int i=0; i<M; i++) scanf("%d", &tar_array[i]);

    for(int i=0; i<M; i++) printf("%d\n", binary_search(array, tar_array[i], N-1));
    return 0;
}

int binary_search(int* array, int target, int len){
    int first = 0, last = len;
    int piv = (first+last)/2;
    while(1){
        if(array[piv] < target){
            first = piv+1;
            piv = (first+last)/2;
        }
        else if(array[piv] > target){
            last = piv-1;
            piv = (first+last)/2;
        }
        else{
            return 1;
        }
        if(first > last) break;
    }
    return 0;
}