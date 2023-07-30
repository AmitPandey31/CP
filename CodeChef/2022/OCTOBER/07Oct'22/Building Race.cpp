#include <bits/stdc++.h>
using namespace std;

void solve(){
    float a,b,x,y;
    cin>>a>>b>>x>>y;
    float quotient1 = a/x;
    float quotient2 = b/y;
    if(quotient2 > quotient1){
        cout<<"Chef"<<endl;
    } else if (quotient1 > quotient2){
        cout<<"Chefina"<<endl;
    } else {
        cout<<"Both"<<endl;
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
