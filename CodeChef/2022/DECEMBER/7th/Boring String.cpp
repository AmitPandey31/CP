#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,sum=0;
cin>>n;
string s;
cin>>s;
map<pair<char,int>,int> Count;
int current = s[0];
int length = 1;
Count[{current,length}]++;
for(int i = 1; i < n; i++){
    if(current == s[i]){
        length++;
    } else{ 
        length = 1;
        current = s[i];
    }
        Count[{current,length}]++;
    
}
for( auto &it : Count){
    if(it.second == 1){
        sum = max(sum, it.first.second - 1);
        continue;
    }
    sum = max(sum, it.first.second);
}
cout<<sum<<endl;
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
