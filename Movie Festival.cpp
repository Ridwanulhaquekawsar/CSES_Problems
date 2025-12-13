#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
ll st, ed;
vector< pair<ll, ll> >times;
ll prev_end;
ll cnt;

void solve(){
    cin >> n;
    
    for(ll i = 1; i <= n; i++){
        cin >> st >> ed;
        times.push_back({ed, st});
    }
    
    sort(times.begin(), times.end());
    
    prev_end = times[0].first;
    cnt = 1;
    
    for(ll i = 1; i < n; i++){
    
        if(times[i].second >= prev_end){
            cnt++;
            prev_end = times[i].first;
        }
    }
    
    cout << cnt << nl;
}

int main(){
    FastIO(); solve();
}
