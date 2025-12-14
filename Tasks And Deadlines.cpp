#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll a, d;
ll n;
ll ft, mx_r;
vector< pair<ll, ll> >dur;

void solve(){
    cin >> n;
    
    ft = 0;
    mx_r = 0;
    
    while(n--){
        cin >> a >> d;
        dur.push_back({a, d});
    }
    
    sort(dur.begin(), dur.end());
    
    for(auto &[du, D] : dur){
        ft += du;
        mx_r += (D - ft);
    }
    
    cout << mx_r << nl;
}

int main(){
    FastIO(); solve();
}
