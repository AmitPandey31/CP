#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin>>n;
 vector<int> arr(n);
 int f = 1;
 unordered_map<int,int> umap;
 for(int i = 0; i < n; i++){
     cin>>arr[i];
     umap[arr[i]]++;
 }
 for(auto it : umap){
     if(it.second % 2 == 1){
         f = 0;
         break;
     }
 }
 if(f == 1){
     cout<<"YES"<<endl;
 } else {
     cout<<"NO"<<endl;
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
