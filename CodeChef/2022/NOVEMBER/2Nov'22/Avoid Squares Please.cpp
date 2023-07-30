#include <iostream>
using namespace std;

void solve(){
    int len;
    cin>>len;    
    for(int per = 1; per <= len; per++){
        cout<<per<<" "; 
    }
        cout<<endl;
    
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
