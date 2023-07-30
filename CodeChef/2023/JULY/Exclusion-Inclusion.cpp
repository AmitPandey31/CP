#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> vec(n);
    long long sum = 0;
    for(auto &i:vec){
        cin>>i;
        sum += i;
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        cout<<sum<<" ";
        sum -= vec[i];
    }
    cout<<"\n";
   
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
