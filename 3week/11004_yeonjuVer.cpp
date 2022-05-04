#include <iostream>
using namespace std;

int arr[5000001];

int quick(int *arr,int start, int end, int k){
	if(arr==NULL || start>end) return -1;
	if(start==end) return arr[start];
	
	int pivot = start;
	int i = start+1;
	int j = end;
	int temp;
	
	while(i<=j){ 
		while(i<=end && arr[i] <= arr[pivot]) i++;
		while(j>start && arr[j] >= arr[pivot]) j--;
		if(i>j){
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}	
	
	int nth = j;
	if(nth==k) return arr[nth];
	else if(nth>k) return quick(arr,start,j-1,k);
	else return quick(arr,j+1,end,k);
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << quick(arr,0,n-1,k-1);

}
