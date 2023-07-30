#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> cards(n);
    unordered_map<int,int> umap;
    for(int i = 0; i < n; i++){
        cin>>cards[i];
        umap[cards[i]]++;
    }
    
    int maxCount = 0;
    for(auto x : umap){
        if(x.second > maxCount){
            maxCount = x.second;
        }
    }
      int ans = n - maxCount;
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




