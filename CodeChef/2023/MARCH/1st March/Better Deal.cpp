#include <iostream>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int x = 100 - a;
    int y = 200 - (b*2);
    if(x > y) {cout<<"SECOND"<<endl;}
    else if ( x < y){cout<<"FIRST"<<endl;}
    else cout<<"BOTH"<<endl;
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
