#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define pll pair<ll, ll>
#define vll vector<ll>

#define st set<ll>
#define ml multiset<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n;
ll a, b;
multiset<pll>et_rid;
vector< tuple<ll, ll, ll> >arri;
vll room_no;

void solve(){
    in n;
    room_no.resize(n);
    
    rep(i, n){
        in a >> b;
        arri.pb({a, b, i});
    }
    
    sort(all(arri));
    
    auto &[St, et, idx] = arri[0];
    room_no[idx] = 1;
    et_rid.emplace(et, 1);
    
    
    rep1(i, 1, n - 1){
    
        auto [St, et, idx] = arri[i];
        
        auto [small_et, rid] = *begin(et_rid);
        
        if(St > small_et){
        
            room_no[idx] = rid;
            et_rid.erase(begin(et_rid));
            et_rid.emplace(et, rid);
        }
        else{
          
            room_no[idx] = et_rid.size() + 1;
            et_rid.emplace(et, room_no[idx]);
        }
    }
    
    out(*max_element(room_no.begin(), room_no.end()) ) ;
    
    for(auto &x : room_no) cout << x << " ";
}

int main(){
    FastIO(); 
    
    t = 1;
    // in t;
    while(t--) solve();
  }
