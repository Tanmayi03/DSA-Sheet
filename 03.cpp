#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
	//code
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    ll k;
	    cin>>k;
	    sort(a,a+n);
	    cout<<a[k-1]<<endl;
	}
	return 0;
}