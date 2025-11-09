#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0);
using ll = long long int;
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll n,k,l;
vector<ll>a;
pbds<pair<ll, ll>>p;

void solve(){
    cin>>n>>k;
    a.resize(n);
    
    for(auto &b : a) cin>>b;
    
    l=0;
    
    for(int r=0; r<n; r++){
        p.insert({a[r],r});
        
        if(r-l+1==k){
            if(k%2) cout<<p.find_by_order(k/2)->first<<" ";
            else cout<<p.find_by_order((k/2)-1)->first<<" ";
            
            p.erase({a[l],l++});
        }
    }
}

int main(){
    FastIO(); solve();
}
