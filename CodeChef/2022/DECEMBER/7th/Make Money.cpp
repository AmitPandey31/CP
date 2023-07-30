#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,x,c,cost = 0;
cin>>n>>x>>c;
int arr[n];
int sum = 0;
for(int i = 0; i < n; ++i){
    cin>>arr[i];
}
for(int i = 0; i < n; ++i){
    if(x - arr[i] > c){
        arr[i] = x;
        cost += c;
    }
}
for(auto s : arr){
    sum += s;
}
cout<<sum-cost<<endl;

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
