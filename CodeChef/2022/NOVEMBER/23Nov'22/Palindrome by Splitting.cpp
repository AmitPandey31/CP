#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
int a[n];
int ans = 0;
int f = 0;
int l = n - 1; 
for(int i = 0; i < n; i++){
    cin>>a[i];
}
while(f<l){
    if(a[f] == a[l]){
        f++;
        l--;
    } else if(a[l] > a[f]){
        a[l] = a[l] - a[f];
        f++;
        ans++;
    } else{
        a[f] = a[f] - a[l];
        l--;
        ans++;
    }
}
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