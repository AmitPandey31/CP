#include <bits/stdc++.h>
using namespace std;

void solve(){
int x,y;
cin>>x>>y;
int r = x % y;
int q = x / y;
if(r==0){
    cout<<q<<endl;
} else if (x < y){
    cout<<x<<endl;
} else {
    cout<<q+r<<endl;
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