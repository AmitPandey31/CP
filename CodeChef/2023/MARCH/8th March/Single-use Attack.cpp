#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h,x,y;
    cin>>h>>x>>y;
    if(h == y){
        cout<<1<<endl;
    } else if (x > y){
        cout<<ceil(h/(x*1.0))<<endl;
    } else {
        int z = h - y;
        cout<<1+ceil(z/(x*1.0))<<endl;
    }
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
