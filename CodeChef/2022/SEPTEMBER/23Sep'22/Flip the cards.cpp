#include <iostream>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    if(x == 0 || x == n){
        cout<<"0"<<endl;
    }
    else if(x <= n/2){
        cout<<x<<endl;
    }
     else {
        cout<<(n-x)<<endl;
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
