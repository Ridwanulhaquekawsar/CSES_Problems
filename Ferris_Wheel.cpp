#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, x;
vector<ll>v;
ll l, r;
ll cnt;

void solve(){
    cin >> n >> x;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    l = 0;
    r = n - 1;
    cnt = 0;
    
    while(l <= r){
    
        if(l != r){
        
            if(v[l] + v[r] <= x){
                r--;
                l++;
            }
            else r--;
        }
        else{
            l++;
            r--;
        }
        
        cnt++;    
    }
    
    cout << cnt << nl;
}

int main(){
    FastIO(); solve();
}
