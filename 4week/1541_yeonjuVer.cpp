#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int start = -1, cnt = 0, buho = 0, res,cmp=0,num; 
	cin >> input;
	for(int i=0;i<input.size();i++){
		if(input[i]=='+'){
			if(buho==0) buho = 1;
			else if(buho==1) buho = 1;
			else if(buho==-1) buho = 2;
			else if(buho==-2) buho = 2;
			else if(buho==2) buho = 2;
		}
		else if(input[i]=='-'){
			buho = -1;
			if(buho=2) buho = -2;
		}
		else if(input[i+1]=='+' || input[i+1]=='-'){
			if(cnt==0) num = input[i]-'0';
			else num = stoi(input.substr(start,cnt+1));
	//		cout << "num is " << num;
			
			if(buho==0){
				res = num;
			} 
			else if(buho==1){
				res += num;
			}
			else if(buho==2){
				cmp += num;
			}
			else if(buho==-2){
				res -= cmp;
				cmp = num;
			}
			else if(buho==-1){
				cmp = num;
			}
			else{
				res -= num;
			}
		//	cout << res <<'\n';
			start = -1;
			cnt = 0;
		}
		else if(i==input.size()-1){
			if(cnt==0) num = input[i]-'0';
			else num = stoi(input.substr(start,cnt+1));
			
			if(buho==-2) res -= num + cmp;
			else if(buho==-1) res -= num;
			else if(buho==0) res = num;
			else if(buho==1) res += num;
			else if(buho==2) res -= num + cmp;
		}
		else{
			if(start==-1){
				start = i;
				cnt = 0;
			}
			cnt ++;
			
		}
	}
	cout << res;
}
