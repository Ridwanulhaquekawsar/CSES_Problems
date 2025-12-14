#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
vector<ll>v;
ll med;
ll ans;

void solve(){
    cin >> n;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    med = v[n/2];
    ans = 0;
    
    for(auto &x : v) ans += abs(med - x);
    
    cout << ans << nl;
}

int main(){
    FastIO(); solve();
}
