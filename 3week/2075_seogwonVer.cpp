#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    priority_queue<long long> q;

    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a;
            q.push(-1*a);
            if (q.size() > n)
                q.pop();
        }
    }
    cout<<-1*q.top();
}

