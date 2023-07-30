#include <bits/stdc++.h>
using namespace std;

void solve(){
int n,len,ans;
cin>>n;
vector<int> arr(n);
unordered_map<int,int> umap;
for(int i = 0; i < n; i++){
    cin>>arr[i];
    umap[arr[i]]++;
}
len = arr.size();
int max = INT_MIN;
for(auto it : umap){
    if(it.second>max){
        max = it.second;
    }
}
ans = len - max;
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