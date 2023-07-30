#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string res;
    cin>>res;
    if(res[0] == '0'){
        res[0] = '1';
        k -= 1;
    } 
    for(int i = 0; i < k; i++){
        res += '0';
    }
    cout<<res<<endl;
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
