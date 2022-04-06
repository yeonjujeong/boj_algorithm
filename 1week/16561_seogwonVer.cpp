#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x; int args; int ans = 0;
    cin>>x;
    args = x/3;
    for(int i=args-2; i>0; i--){
        ans += i;
    }
    cout<<ans<<"\n";
    return 0;
}