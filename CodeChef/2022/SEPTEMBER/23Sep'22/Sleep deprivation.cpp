#include <iostream>
using namespace std;

void solve(){
    int x;
    cin>>x;
    if(x < 7) {cout<<"YES"<<endl;}
    if (x >= 7) {cout<<"NO"<<endl;}
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
