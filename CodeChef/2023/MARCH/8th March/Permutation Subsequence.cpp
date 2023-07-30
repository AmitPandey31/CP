#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> umap;
    for(int i = 0; i < n; i++){
        int e;
        cin>>e;
        umap[e]++;
    }
    long long res = 0;
    const int MOD = 1e9 + 7; 
    long long pre = 1;
    
    for(int i = 1; i<=n ; i++){
        long long temp = pre * umap[i];
        temp %= MOD;
        res += temp;
        pre = temp;
        res %= MOD;
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
