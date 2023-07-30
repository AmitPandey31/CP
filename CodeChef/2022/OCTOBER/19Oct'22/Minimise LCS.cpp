#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    unordered_map<char,int> m1,m2;
    for(auto i : a){
        m1[i]++;
    }
    for(auto j : b){
        m2[j]++;
    }
    int ans = 0;
    for(char i = 'a'; i <= 'z'; i++){
        ans = max(ans, min(m1[i],m2[i]));
    }
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
