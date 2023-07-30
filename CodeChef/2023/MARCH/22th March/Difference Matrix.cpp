#include <iostream>
using namespace std;

void solve(){
     int n;
     cin>>n;
     int arr[n*n];
     int y = 1;
     for(int i=0;i<n*n;i+=2)
     {
         arr[i]=y;
         y++;
     }
     for(int i=1;i<n*n;i+=2)
     {
         arr[i]=y;
         y++;
     }
     int z = 0;
     for(int i=0;i<n*n;i++)
     {
         cout<<arr[i]<<" ";
         z++;
         if(z%n==0) cout<<endl;
     }
}
int main() {
 int t;
 cin>>t;
 while(t--)
 {
    solve();
 }
 return 0;
}