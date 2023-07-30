#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    vector<int> balls(n);
    for(int i = 0; i < n; i++){
        cin>>balls[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(balls[i]>max){
            max = balls[i];
        }
    }
    cout<<max<<endl;
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
