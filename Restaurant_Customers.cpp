#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
ll st, ed;
vector< pair<ll, ll> >times;
ll cur_c, mx_c;

void solve(){
    cin >> n;
    
    for(ll i = 0; i < n; i++){
    
        cin >> st >> ed;
        
        // This labeling actually indicating the arrival and departure times of customers ! 
        times.push_back({st, 1});
        times.push_back({ed, -1});
    }
    
    sort(times.begin(), times.end());
    
    cur_c = 0;
    mx_c = 0;
    
    for(auto &[f, s] : times){
        cur_c += s;
        mx_c = max(mx_c, cur_c);
    }
    
    cout << mx_c << nl;
}

int main(){
    FastIO(); solve();
}
