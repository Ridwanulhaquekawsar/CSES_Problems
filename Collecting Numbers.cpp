#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
map<ll, ll>mp;
ll x;
ll rounds;

void solve(){
    cin >> n;
    
    for(ll i = 1; i <= n; i++){
        cin >> x;
        mp[x] = i;
    }
    
    rounds = 1;
    
    for(ll i = 2; i <= n; i++){
        if(mp[i] < mp[i - 1]) rounds++;
    }
    
    cout << rounds << nl;
}

int main(){
    FastIO(); solve();
}
