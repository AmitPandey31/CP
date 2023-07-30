#include <bits/stdc++.h>
using namespace std;

void solve(){
int n,x,y;
cin>>n>>x>>y;
if(y % x == 0 or y == 0){
    cout<<"YES"<<endl;
} else{
    cout<<"NO"<<endl;
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

