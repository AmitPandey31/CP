#include <iostream>
using namespace std;

void solve(){
    int n,x,k,p;
    cin>>n>>x>>k>>p;
    if(k==n){
        p = p + 20;
    }
    p += 10*min(k,x);
    k -= min(k,x);
    p += 5*k;
    cout<<p<<endl;
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
