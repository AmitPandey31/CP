#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    unordered_map<int,int> umap;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        umap[arr[i]]++;
    }

    if(umap.size() == n){
        cout<<(n*(n-1))/2<<endl;
    } 
    else {
        long long res = 0, x;
        long long add = 0;
        for(int i = 0; i < n; i++){
            x = n - umap[arr[i]] - add;
            res +=x;
            umap[arr[i]]--;
            add++;
        }
        cout<<res<<endl;
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
