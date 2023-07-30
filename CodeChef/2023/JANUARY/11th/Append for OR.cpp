#include <iostream>
using namespace std;

void solve(){
   int n,y;
   cin>>n;
   cin>>y;
   int res = 0;
   int a[n];
   for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        res |= a[i];
	    }
    int x=y-res;
    if((x&y) == x)
	    cout<<x<<endl;
	    else
	    cout<<-1<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   solve();   
	}
	return 0;
}

