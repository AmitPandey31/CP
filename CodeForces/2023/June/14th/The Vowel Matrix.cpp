#include <iostream>
#include <string>
using namespace std;
int mod = 1000000007;

void solve(){
int n,k;
cin>>n>>k;
string str;
cin>>str;
int res = 1;
int count = 0;
int count1 = 0;
bool first = false;
bool second = false;
for(int i = 0; i < n; ++i){
    if(str[i] =='a' || str[i] =='e' || str[i] =='i' ||str[i] =='o'
    ||str[i] =='u'){
        if(!first){
            if(second){
                count1++;
                res = (res*count1)%mod;
            }
        }
        count++;
        first=true;
        second = true;
        count1=0;
    } else{
        if(!first){
            count1++;
        }
     }
    if(count == k){
            first = false;
            count = 0;
        }
  }
  cout<<res<<endl;
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
