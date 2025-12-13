#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, m;
map<ll, ll>mp;
ll rounds;
ll l, r;
ll val;
ll x, y;
vector<ll>v;

void solve(){
    cin >> n >> m;
    v.resize(n + 1);
    
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        mp[v[i]] = i;
    }
    
    rounds = 1;
    
    for(ll i = 2; i <= n; i++){
        if(mp[i] < mp[i - 1]) rounds++;
    }
    
    while(m--){
        cin >> l >> r;
        
        if(l > r) swap(l, r);
        x = v[l];
        y = v[r];
        
        if(x == y - 1) rounds++;
        if(x == y + 1) rounds--;
        
        if(mp[x + 1] > l && mp[x + 1] < r) rounds++;
        if(mp[x - 1] > l && mp[x - 1] < r) rounds--;
        if(mp[y + 1] > l && mp[y + 1] < r) rounds--;
        if(mp[y - 1] > l && mp[y - 1] < r) rounds++;
        
        cout << rounds << nl;
        
        swap(v[l], v[r]);
        
        mp[x] = r;
        mp[y] = l;
    }
}

int main(){
    FastIO(); solve();
}
