#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    if(x > 100){
        x-=10;
    }
    cout<<x<<endl;
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
