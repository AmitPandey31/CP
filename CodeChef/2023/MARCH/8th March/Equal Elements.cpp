#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    unordered_map<long long int, long long int> umap;
     for(int i = 0; i< n; i++){
        umap[arr[i]]++;
    } 
    long long int maxx = 0;
    for(auto i : umap){
        maxx = max(maxx, i.second);
    }
    if(maxx!=0){
        cout<<n-maxx<<endl;
    } else {
        cout<<n-1<<endl;
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
