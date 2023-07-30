#include <bits/stdc++.h>
using namespace std;

void solve(){
        int len;
	    bool f = 1;
	    cin >> len;
	    string str;
	    cin >> str;
	    if(len == 1){
	        cout << "YES" <<endl;
	    }
	    else{
	        for(int i = 0; i < len; ++i){
	        if(str[i] == '1'){
	            if(i == len-1){
	                f = 0;
	                break;
	            }
	            if(str[i+1] == '0'){
	                f = 0;
	                break;
	            }
	            else
	                i++;
	        }
	    }
	    if(f == 1){
	        cout << "YES" << endl;
	          }
	   else
	        cout << "NO" << endl;
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

