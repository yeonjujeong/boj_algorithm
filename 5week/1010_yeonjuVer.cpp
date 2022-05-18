#include <iostream>
using namespace std;

int dp[31][31]={0,};

int bridge(int n, int r){
	if(n==0) dp[n][r]=1;
	if(n==1) dp[n][r]=1;
	if(r==0) dp[n][r]=1;
	if(r==n) dp[n][r]=1;
	
	if(dp[n][r]==0){
		dp[n][r] = bridge(n-1,r-1)+bridge(n-1,r);	
	}
	return dp[n][r];
}

int main(){		
	int t, n, r; cin >> t;
	for(int i=0;i<t;i++){
		cin >> r >> n;
		cout << bridge(n,r) << '\n';
	}
}
