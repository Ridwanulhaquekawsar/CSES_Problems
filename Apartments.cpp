#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, m, k;
vector<ll>a, b;
ll l, r, val;
multiset<ll>ml;
ll ans;

void solve(){
    cin >> n >> m >> k;
    a.resize(n);
    b.resize(m);
    
    for(auto &bx : a) cin >> bx;
    sort(a.begin(), a.end());
    
    for(ll i = 1; i <= m; i++){
        cin >> val;
        ml.insert(val);
    }
    
    ans = 0;
    
    for(auto &x : a){
        l = x - k;
        r = x + k;
        
        auto it = ml.lower_bound(l);
        
        if(it != ml.end() && *it <= r){
            ans++;
            ml.erase(it);
        }
    }
    
    cout << ans << nl;
}

int main(){
    FastIO(); solve();
}
