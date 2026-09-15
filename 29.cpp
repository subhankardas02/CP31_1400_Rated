#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {


	ll n, par, type;
	cin>>n;

    vector<bool> respect(n, false);
    vector<vector<ll>> adj(n);

    for(int i=0; i<n; i++){
        cin>>par>>type;
        if(type==0) respect[i]=true;
        if(par!=-1){
            adj[par-1].push_back(i);
        } 

    }
	
	vector<ll> ans;
	
	for(int i=0; i<n; i++){
        if(respect[i]) continue;

        bool cond=true;
        for(auto it: adj[i]){
            if(respect[it]){
                cond=false;
                break;
            }
        }
        if(cond) ans.push_back(i+1);


    }
    if(ans.size()){
        for(auto it: ans) cout<<it<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
	

}
