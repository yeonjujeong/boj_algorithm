#include <iostream>
using namespace std;
long long int intlen(long long int n){
	if(n<10) return n;
	else if(n<100) return intlen(9)+(n-10+1)*2;
	else if(n<1000) return intlen(99)+(n-100+1)*3;
	else if(n<10000) return intlen(999)+(n-1000+1)*4;
	else if(n<100000) return intlen(9999)+(n-10000+1)*5;
	else if(n<1000000) return intlen(99999)+(n-100000+1)*6;
	else if(n<10000000) return intlen(999999)+(n-1000000+1)*7;
	else if(n<100000000) return intlen(9999999)+(n-10000000+1)*8;
	else return intlen(99999999)+9;
}

int main(){
	long long int n; cin >> n;
	cout << intlen(n); 
}
