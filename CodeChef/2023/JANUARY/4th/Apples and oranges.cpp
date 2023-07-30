#include <bits/stdc++.h>
using namespace std;

void solve(){
    int apples,oranges;
    cin>>apples>>oranges;
    while(apples != oranges){
        if(apples<oranges){
            oranges = oranges - apples;
        } else {
            apples = apples - oranges;
        }
    }
    cout<<apples<<endl;
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
