#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_set<int> s;
    int max = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        if(s.find(a) == s.end()){
            s.insert(a);
            if(s.size() > max){
                max = s.size();
            }
        } else {
            s.erase(a);
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
