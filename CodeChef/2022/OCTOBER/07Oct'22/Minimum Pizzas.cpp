#include <iostream>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int totSlice = n*x;
    int rem = totSlice % 4;
    int quotient = totSlice / 4;
    if(totSlice <= 4){
        cout<<1<<endl;
    }
    else if(totSlice % 4 == 0){
        cout<<quotient<<endl;
    } else {
        cout<<quotient+1<<endl;
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
