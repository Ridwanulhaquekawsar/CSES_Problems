#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll n,k,l,cnt; 
vector<ll>a;
map<int,int>mp;

void solve(){
    cin>>n>>k;
    a.resize(n);
    
    l=0;
    cnt=0;
    
    for(int r=0; r<n; r++){
        cin>>a[r];
        mp[a[r]]++;
        
        while(mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0) mp.erase(a[l]);
            l++;
        }
        
        cnt+=r-l+1;    
    }
    
    cout<<cnt;
}

int main(){
    FastIO(); solve();
}
