#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int tot = 0;
    tot = n*x;
    if(tot < 10000 or tot >99999){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
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
