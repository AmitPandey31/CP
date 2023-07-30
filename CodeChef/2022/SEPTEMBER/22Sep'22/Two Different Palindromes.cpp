#include <bits/stdc++.h>
using namespace std;

void solve(){
 int a,b;
 cin>>a; cin>>b;
 if(a == 1) {cout<<"NO"<<endl;}
 else if (b == 1) {cout<<"NO"<<endl;}
 else if (a%2 != 0 and b%2 != 0) {cout<<"NO"<<endl;}
 else{cout<<"YES"<<endl;}
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

