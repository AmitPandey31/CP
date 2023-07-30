#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,x;
    cin>>a>>b>>x;
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    if(a<=b){
        if((b-a)%(x*2)==0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    else if (a>b){
          if((b-a)%(x*2)==0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
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
