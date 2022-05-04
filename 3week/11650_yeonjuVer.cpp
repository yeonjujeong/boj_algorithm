#include <iostream>
using namespace std;

int arr[1000001][2];

void quick(int start, int end){
	if(start>=end) return;
	
	int pivot = start;
	int i = start+1;
	int j = end;
	int temp;
	
	while(i<=j){ 
		while(i<=end){
			while(arr[i][0]<arr[pivot][0]) i++;
			while(arr[i][0]==arr[pivot][0] && arr[i][1]<=arr[pivot][1]) i++;	
		}
		while(j>start && arr[j] >= arr[pivot]){
			while(arr[j][0]>arr[pivot][0]) j--;
			while(arr[j][0]==arr[pivot][0] && arr[j][1]>=arr[pivot][1]) j--;
		}
		if(i>j){
			temp = arr[j][0];
			arr[j][0] = arr[pivot][0];
			arr[pivot][0] = temp;
			temp = arr[j][1];
			arr[j][1] = arr[pivot][1];
			arr[pivot][1] = temp;
		}
		else{
			temp = arr[j][0];
			arr[j][0] = arr[i][0];
			arr[i][0] = temp;
			temp = arr[j][1];
			arr[j][1] = arr[i][1];
			arr[i][1] = temp;
		}
	}
	quick(start,j-1);
	quick(j+1,end);		
}

int main(){
	int n; cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i][0] >> arr[i][1];
	}
	quick(0,n-1);
	for(int i=0;i<n;i++){
		cout << arr[i][0] << arr[i][1];
	}
}
