#include <iostream>
using namespace std;

int dp[1000001]={0,};

void make1(int n){
	if(n==3) dp[n]=1;
	else if(n==2) dp[n]=1;
	else if(n==1) dp[n]=0;
	else if(n%3==0 && n%2==0){
		int min=0;
		if(dp[n/3]==0) make1(n/3);
		if(dp[n/2]==0) make1(n/2);
		if(dp[n-1]==0) make1(n-1);
		if(dp[n/3]>dp[n/2]) min = dp[n/2];
		else min = dp[n/3];
		if(min>dp[n-1]) min = dp[n-1];
		dp[n] = min+1; 
	}
	else if(n%3==0){
		if(dp[n/3]==0) make1(n/3);
		if(dp[n-1]==0) make1(n-1);
		if(dp[n/3]>dp[n-1]) dp[n] = dp[n-1]+1;
		else dp[n] = dp[n/3]+1;
	}
	else if(n%2==0){
		if(dp[n/2]==0) make1(n/2);
		if(dp[n-1]==0) make1(n-1);
		if(dp[n/2]>dp[n-1]) dp[n] = dp[n-1]+1;
		else dp[n] = dp[n/2]+1;
	}
	else{
		if(dp[n-1]==0) make1(n-1);
		dp[n] = dp[n-1]+1;
	}
}

int main(){
	int n; cin >> n;
	make1(n);
	cout << dp[n];
}
