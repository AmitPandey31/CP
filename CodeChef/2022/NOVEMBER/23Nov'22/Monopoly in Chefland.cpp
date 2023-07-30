#include <iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a > b + c){
        cout<<"Yes"<<endl;
    } else if ( b > a + c){
        cout<<"Yes"<<endl;
    } else if (c > a + b){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
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
