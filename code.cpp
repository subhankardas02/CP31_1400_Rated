#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {


	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> vec;
		for(int i=0; i<n; i++){
			ll val;
			cin>>val;
			vec.push_back(val);
		}
		// vector<ll> ans;
		ll count=0;
		stack<ll> s1;
		for(int i=0; i<n; i++){
			stack<ll> s;
			while((!s1.empty()) && (s1.top()-vec[i])>1){
				s.push(s1.top());
				s1.pop();
				count++;
			}
			s.push(vec[i]);
			while(!s.empty()){
				s1.push(s.top());
				s.pop();
			}
		}
		
		cout<<count<<endl;

// slk
	}
	
	

	

}
