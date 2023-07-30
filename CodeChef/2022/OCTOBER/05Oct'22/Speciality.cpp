#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x > y and x > z){
        cout<<"Setter"<<endl;
    } else if(y > x and y > z){
        cout<<"Tester"<<endl;
    } else {
        cout<<"Editorialist"<<endl;
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
