#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, sum=0, tmp; cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		sum += arr[i]*(n-i);
	}
	cout << sum;
}
