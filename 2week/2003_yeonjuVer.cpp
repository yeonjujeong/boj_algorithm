#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m, sum, cnt=0;
	cin >> n >> m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		sum = arr[i];
		if(sum==m) cnt++;
		else{
			for(int j=i+1;j<n;j++){
				sum+=arr[j];
				if(sum==m) {
					cnt++;
					break;
				}
				else if(sum>m) break;
			}
		}
	}
	cout << cnt;
}
