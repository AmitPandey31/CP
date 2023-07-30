#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    } 
    int min = INT_MAX;
    for(int j = 0; j < n; ++j){
        if(arr[j]<min){min = arr[j];}
    } int count = 0, prime = 0;
    for(int k = 0; k < n; ++k){
        if(arr[k] != min ){
            if(arr[k] % min == 0) count++;
         else {
            prime = 1;
            break;
        }
      }
    }
    if(prime == 0){
        cout<<count<<endl;
    } else{
        cout<<n<<endl;
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
