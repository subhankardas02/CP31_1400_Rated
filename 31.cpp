#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
const ll MOD=1e9+7;
 
ll func(int val, int lim, int idx, vector<vector<ll>>& dp){
 
	if(idx==0){
		return 1;
	}
	if(dp[idx][val]!=-1) return dp[idx][val];
	ll ans=0;
	for(int i=val; i<=lim; i=i+val){
		if(i%val==0) ans=(ans+func(i, lim, idx-1, dp))%MOD;
	}
	return dp[idx][val]=ans;
 
}
 
int main() {
 
 
	ll n, k;
	cin>>n>>k;
	
	vector<vector<ll>> dp(k+1, vector<ll>(n+1, -1));
 
	ll ans=func(1, n, k, dp);
 
	cout<<ans<<endl;
	
 
}