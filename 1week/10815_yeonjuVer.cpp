#include <iostream>
#include <algorithm>
using namespace std;

int arr1[500001];

int binary(int target, int start, int end){
	if(start>end) return 0;
	int mid = (start+end)/2;
	
	if(arr1[mid]==target) return 1;
	else if(target>arr1[mid]) return binary(target,mid+1,end);
	else if(target<arr1[mid]) return binary(target,start,mid-1);	
}

int main(){
	//�ð� �ʰ��� ���� �Ʒ��� �� ��ɾ �־��ִ� �ذ�� 
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int n; cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr1[i];
	}
	sort(arr1,arr1+n);
	int m; cin >> m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin >> arr2[i];
		cout << binary(arr2[i],0,n) << ' ';
	}
}
