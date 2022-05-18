#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
    int arr[1001];
    int dp[1001];
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> arr[i];
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        int val = 0;
        for(int j=1; j<i; j++){
            if(arr[j] < arr[i]){
                if(val <dp[j]) val = dp[j];
            }
        }
        dp[i] = val + 1;
    } 
    int ans=0;
    for(int i=1; i<=n; i++){
        if(ans < dp[i]) ans = dp[i];
    }
    cout << ans;
    return 0;
}
