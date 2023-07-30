#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
int ar[n],arr[n];
int count= 0;
int res1, res2 = 0;
for(int i = 0; i < n; i++){
    cin>>ar[i];
    if(ar[i]!=0){
        count++;
    } else {
        res1 = max(res1, count);
        count = 0;
    }
}
res1 = max(res1, count);
count=0;
for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i]!=0){
        count++;
    } else {
        res2 = max(res2, count);
        count = 0;
    }
}
res2 = max(res2, count);
if(res1 > res2) cout<<"Om"<<endl;
else if(res1 == res2) cout<<"Draw"<<endl;
else cout<<"Addy"<<endl;
    
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
