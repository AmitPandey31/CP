#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int count = 0;
     for(auto i : s){
        if(i =='a' or i =='e' or i =='i' or i =='o' or i =='u'){
            count++;
            if(count>2){
                cout<<"Happy"<<endl;
                break;
            }
    } else {
        count=0;
   }
}   
    if(count<=2)
    cout<<"Sad"<<endl;
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

