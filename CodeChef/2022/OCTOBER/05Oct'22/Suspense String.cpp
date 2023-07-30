#include <bits/stdc++.h>
using namespace std;

void solve(){
int len;
cin>>len;
string str;
cin>>str;
string ans = "";
int i = 0;
int j = len - 1;
while(i<=j){
    if(str[i] == '0'){
        ans = str[i] + ans;
    } else {
        ans = ans + str[i];
    }
    if(i<j){
        if(str[j] == '0'){
            ans = ans + str[j];
        } else {
            ans = str[j] + ans;
        } 
        j--;
    }
    i++;
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

