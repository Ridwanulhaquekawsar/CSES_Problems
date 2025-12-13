#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
vector<ll>v;
ll s;

void solve(){
    cin >> n;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    s = 0;
    
    for(auto &x : v){
    
        if(x > s + 1){
            cout << s + 1 << nl;
            return;
        }
        
        s += x;
    }
    
    cout << s + 1 << nl;
}

int main(){
    FastIO(); solve();
}
