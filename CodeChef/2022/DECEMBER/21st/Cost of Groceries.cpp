#include <iostream>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int ar1[n],ar2[n];
    for(int i = 0; i < n; i++){
        cin>>ar1[i];
    }
    for(int i = 0; i < n; i++){
        cin>>ar2[i];
    } int tot = 0;
    for(int i = 0; i < n; i++){
        if(ar1[i] >= x){
            tot += ar2[i];
        }
    }
    cout<<tot<<endl;
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
