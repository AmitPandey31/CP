#include <iostream>
using namespace std;

void solve(){
    int l,k;
    cin>>l>>k;
    if(l%k==0){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    return;
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