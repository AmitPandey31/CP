#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int count = 0;
    for(int i = 1; i < x; i++){
        if(y >= x){
            break;
        } else {
            y += i;
            count++;
        }
    }
    cout<<count<<endl;
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
