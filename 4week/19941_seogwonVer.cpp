#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
    int n, k;
    int can_eat = 0;
    int count = 0;
    scanf("%d %d", &n, &k);
    char* table = (char*)malloc(sizeof(char) * n);
    scanf("%s", table);

    for(int i=0; i<n; i++){
        if(table[i]=='P'){
            for(int j=i-k; j<=i+k; j++){
                if(j >= 0 && j <= n-1 && !can_eat && table[j] == 'H') {
                    can_eat = 1;
                    table[j] = 'h';
                }
            }
            if(can_eat){
                can_eat = 0;
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}