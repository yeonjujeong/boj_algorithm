#include <stdio.h>
int main(){
    int n;
    int west, east;
    int memo[30][30] = { 1,1, };
    for(int i=1; i<30; i++){
        memo[i][0] = 1; memo[i][i+1] = 1;
        for(int j=1; j<=i; j++){
            memo[i][j] = memo[i-1][j-1] + memo[i-1][j];
        }
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &west, &east);
        printf("%d\n", memo[east-1][west]);
    }
    return 0;
}