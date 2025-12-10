#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
set<ll>st;
ll x;

void solve(){
    cin >> n;
    
    while(n--){
        cin >> x;
        st.insert(x);
    }
    
    cout << st.size() << nl;
}

int main(){
    FastIO(); solve();
}
