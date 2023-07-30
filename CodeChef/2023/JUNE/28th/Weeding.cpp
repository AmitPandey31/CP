#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr, int m , int k){

           for(int i = 0; i < arr.size(); i++){
               if(m < arr[i] + k - 1){
                   return false;
               }
           }
           return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, m ,k;
	    cin>>n>>m>>k;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    
	    if(solve(arr, m, k)){
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
