#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll n,q,l,r; vector<ll>prf;

void solve(){
    cin>>n>>q;
    prf.resize(n+1);
    
    cin>>prf[1];
    for(int i=2; i<=n; i++){
        cin>>prf[i];
        prf[i]+=prf[i-1];
    }
    
    while(q--){
        cin>>l>>r;
        
        cout<<prf[r]-prf[l-1]<<'\n';
    }
}

int main(){
    FastIO(); solve(); return 0;
}
