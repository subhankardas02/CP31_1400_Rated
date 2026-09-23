#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {


	ll t=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> vec;
		vector<vector<int>> dp(n+1, vector<int>(2, -1));
		for(int i=0; i<n; i++){
			ll val;
			cin>>val;
			vec.push_back(val);
		}
		ll sum=0, minval=0;
		bool del=false;
		bool poss=true;
		for(int i=0; i<n; i++){
			if(vec[i]<minval) minval=vec[i];
			sum=sum+vec[i];
			if(sum<0){
				if(del==true){
					poss=false;
				}
				else{
					sum=sum-minval;
					del=true;
				}
			}

		}


		if(poss) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		


	}
	
	
	

}
