#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, m;
multiset<ll>ml;
ll val, th;

void solve(){
    cin >> n >> m;
    
    while(n--){
        cin >> val;
        ml.insert(val);
    }
    
    while(m--){
        cin >> th;
        
        auto it = ml.upper_bound(th);
        
        if(it == ml.begin()) cout << -1 << nl;
        else{
            it--;
            cout << *it << nl;
            ml.erase(it);
        }
    }
}

int main(){
    FastIO(); solve();
}
