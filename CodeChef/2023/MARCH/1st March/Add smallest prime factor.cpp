#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int p;
    if(x % 2 == 0){
        p = 2;
    } else if ( x % 3 == 0){
        p = 3;
    } else {
        p = x;
    } 
    int diff = y - ( x + p);
    int res = diff/2 + 1;
    if(diff % 2 != 0){
        res += 1;
    } 
    cout<<res<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
