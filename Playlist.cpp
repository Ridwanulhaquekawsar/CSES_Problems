#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll n,cnt,first_occur_idx,l,ans; 
vector<int>a; 
map<int,int>mp1; map<int,set<int>>mp2;


void solve(){
    cin>>n;
    a.resize(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    cnt=0;
    l=0;
    ans=0;
    
    for(int r=0; r<n; r++){
        mp1[a[r]]++;
        mp2[a[r]].insert(r);
        cnt++;
            
        if(mp1[a[r]]>1){
            first_occur_idx=*mp2[a[r]].begin();
            
            while(l<=first_occur_idx){
                mp1[a[l]]--;
                mp2[a[l]].erase(l);
                l++;
                cnt--;
            }
        }
        
        ans=max(ans,cnt);
    }
    
    cout<<ans;
}

int main(){
    FastIO(); solve(); return 0;
}
