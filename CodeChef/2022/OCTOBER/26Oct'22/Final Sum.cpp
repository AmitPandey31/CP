#include <bits/stdc++.h>
using namespace std;

void solve(){
int n,q;
cin>>n>>q;
int array[n];
int array_sum = 0;
for(int i = 0; i < n; ++i){
    cin>>array[i]; array_sum+=array[i];
}
for(int j = 1; j <= q; ++j){
    int f,s; cin>>f>>s;
    if((s-f+1)%2==1){
        array_sum++;
    } else{
        array_sum+=0;
    }
}
cout<<array_sum<<endl;
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