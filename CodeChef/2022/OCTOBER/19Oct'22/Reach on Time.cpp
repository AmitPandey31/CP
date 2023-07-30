   #include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> array(n);
    unordered_map<int,int> umap;
    for(int i = 0; i < n; i++){
        cin>>array[i];
        umap[array[i]]++;
    }
    
    int Count = 0;
    for(auto x : umap){
        if(x.second > 1){
            Count++;
        }
    }
      if(n == 1){
          cout<<"YES"<<endl;
      } else if (Count == 0){
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




