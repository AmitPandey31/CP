#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, vector<long long> arr){

     long long cost = n*(n+1)/2;
     long long sum = 0;
     for(long long i : arr){
         sum += i;
     }
     return cost - sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n, m;
	    cin>>n>>m;
	    vector<long long> arr(m);
	    for(int i = 0; i < m; i++){
	        cin>>arr[i];
	    }
	    
	   cout<<solve(n, arr)<<endl;
	}
	return 0;
}
