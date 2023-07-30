#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int dist = x*5;
    if(y <= dist){
        cout<<"YES"<<endl;
    } else {
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
