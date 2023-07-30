#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    string firstHalf = " ";
    string secondHalf = " ";
    for(int i = 0; i < n / 2; ++i){
        firstHalf += str[i];
    }
    for(int j = n / 2; j < n; ++j){
        secondHalf += str[j];
    }
    if(firstHalf == secondHalf){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    // int i = 0 , j = n - 1;
    // int flag = 0;
    // while(i < j){
    //     if(s[i] == s[j]){
    //         i++;
    //         j--;
    //     } else {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 0){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
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
