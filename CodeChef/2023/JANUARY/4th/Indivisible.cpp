#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i = 1; i <= 100; i++){
        if(a % i != 0 and b % i != 0 and c % i != 0){
            cout<<i<<endl;
            break;
        }
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
