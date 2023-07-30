#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1 = 1, count0 = 0;
    char o = '1', z = '0';
    for(int i = 1; i < n; i++){
        if(o != s[i-1]){
            o = '1';
            count1++;
        } else { o = '0';}
    }
    for(int j = 1; j < n; j++){
        if(z != s[j-1]){
            z = '1';
            count0++;
        } else { z = '0';}
    } int ans = 0;
    ans = max(count0, count1);
    cout<<ans<<endl;
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
