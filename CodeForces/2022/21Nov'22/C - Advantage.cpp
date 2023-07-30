#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 int n;
 cin>>n;
 vector<long long> str(n),str2(n);
 long long int last,secondLast;
 for(int i=0; i<n; ++i){
     cin>>str[i];
 }
str2=str;
sort(str.begin(),str.end());
last = str[n-1];
secondLast = str[n-2];
for(int i = 0; i < n; ++i){
    if(str2[i] == last){
        cout<<last - secondLast<<" ";
    } else {
        cout<<str2[i] - last<<" ";
    }
}
cout<<"\n";
 
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}