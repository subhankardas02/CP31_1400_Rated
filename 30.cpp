#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {


	ll n, m, k;
	cin>>n>>m>>k;
	
	vector<ll> vec;
	ll last;
	cin>>last;
    for(int i=0; i<n-1; i++){
		ll val;
		cin>>val;
		vec.push_back(abs(last-val)-1);
		last=val;
	}
	sort(vec.begin(), vec.end());
	if(k>=n) cout<<n<<endl;
	else{
		ll ans=n;
		for(int i=0; i<n-k; i++){
			ans=ans+vec[i];
		}
		cout<<ans<<endl;

	}

	

}
