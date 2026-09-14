#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1="cbaebabacd";
    string s2="abc";
    // cin>>s1;
    // cin>>s2;
    
	map<char, int> m1;
	map<char, int> m2;
	
	for(char c: s2){
	    m2[c]++;
	}
	int st=-1;
	vector<int> ans;
	int idx=0;
	for(char c: s1){
	    
	    if(m2.find(c)==m2.end()){
	        m1.clear();
	        st=idx;
	        idx++;
	        continue;
	        
	    }
	    else{
	       m1[c]++;
	       if(m1==m2){
	           ans.push_back(st+1);
	           idx++;
	           continue;
	           
	       } 
	       else if(m1[c]<=m2[c]){
	           idx++;
	           continue;
	           
	       }
	       else{
	           while(m1[c]>m2[c]){
	               char ch=s1[st+1];
	               m1[ch]--;
	               st++;
	           }
	           if(m1.size()>0 && m1==m2) ans.push_back(st+1);
	           idx++;
	       }
	        
	    }
	    for(int it: ans) cout<<it<<" ";
	    
	    
	}
	
	

}
