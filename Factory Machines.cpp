#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>
#define Nl cout << nl

#define pinf LLONG_MAX
#define ninf LLONG_MIN

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Mx(x) *max_element(all(x) )
#define Mn(x) *min_element(all(x) )
#define Sum(x) accumulate(all(x), 0LL)
#define Sum1(x, l, r) accumulate( (x).begin() + (l), (x).begin() + (r), 0LL)

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define fi first
#define se second
#define fr front()
#define bc back()
#define bg begin()
#define rbg rbegin()

#define lb(...) lower_bound(__VA_ARGS__)
#define ub(...) upper_bound(__VA_ARGS__)
#define pu(...) push(__VA_ARGS__)
#define pf(...) push_front(__VA_ARGS__)
#define pb(...) push_back(__VA_ARGS__)

#define ed end()
#define po pop()
#define pob pop_back()
#define pof pop_front()
#define clr clear()
#define empt empty()
#define wh while
#define ep(...) emplace(__VA_ARGS__)
#define eb(...) emplace_back(__VA_ARGS__)
#define ef(...) emplace_front(__VA_ARGS__)
#define sz(x) (ll)x.size()
#define bp(x) __builtin_popcount(x)
#define lg(x) __lg(x)
#define ins(...) insert(__VA_ARGS__)
#define er(...) erase(__VA_ARGS__)
#define fd(...) find(__VA_ARGS__)
#define cnt(...) count(__VA_ARGS__)

/*
template<typename Container, typename T>
ll cnt1(const Container &c, const T &val) {
    if constexpr (requires { c.count(val); }) {
        // For set or multiset: efficient O(log n)
        return c.count(val);
    } else {
        // For vector, deque, list: O(n)
        return count(c.begin(), c.end(), val);
    }
}

template<typename Container, typename T>
auto fd1(Container &c, const T &val) {
    if constexpr (requires { c.find(val); }) {
        return c.find(val); // set, multiset, map → iterator
    } else {
        return std::find(c.begin(), c.end(), val); // vector, deque, list
    }
}
*/

using pii = pair<int, int>;
using pdd = pair<double, double>;
using pbb = pair<bool, bool>;
using pcc = pair<char, char>;
using pss = pair<string, string>;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vpii = vector< pair<int, int> >;
using vpdd = vector< pair<double, double> >;
using vpbb = vector< pair<bool, bool> >;
using vpcc = vector< pair<char, char> >;
using vpss = vector< pair<string, string> >;
using vvi = vector< vector<int> >;
using vvd = vector< vector<double> >;
using vvb = vector< vector<bool> >;
using vvc = vector< vector<char> >;
using vvs = vector< vector<string> >;
using vvpll = vector< vector< pair<ll, ll> > >;
using vvpdd = vector< vector< pair<double, double> > >;
using vvpbb = vector< vector< pair<bool, bool> > >;
using vvpcc = vector< vector< pair<char, char> > >;
using vvpss = vector< vector< pair<string, string> > >;

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector< vector<ll> >
#define vpll vector<pll>
#define S string

#define St set<ll>
#define ST stack<ll>
#define Ml multiset<ll>
#define Mlpll multiset<pll>
#define Mp map<ll, ll>
#define Ump unordered_map<ll, ll>
#define Q queue<ll>
#define Pq priority_queue<ll>
#define Dq deque<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)
#define f(n) for (ll i = 0; i < (n); i++)
#define f1(a, b) for(ll i = a; i <= b; i++)
#define rf(n) for(ll i = n - 1; i >= 0; i--)
#define rf1(a, b) for(ll i = a; i >= b; i--)
#define fin(v, n) f(n) in v[i];

vll getDivisors(ll n){
    vll divisors;
    
    for(ll i = 1; i <= n/i; i++){
    
        if(n % i == 0){
            divisors.pb(i);
            if(i != n/i) divisors.pb(n/i);
        }
    }
    
    sort(all(divisors) );
    return divisors;
}

bool isPrime(ll n){

    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    
    for(ll i = 3; i <= n/i; i += 2){
        if(n % i == 0) return 0;
    }
    
    return 1;
}

class cmp{
    public:
    bool operator()(){
        
    }
};

/*
ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
*/

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll T;
ll n, k;
vll v;
ll mid;
ll cnt;
ll ans;
ll l, r;

void solve(){
    in n >> k;
    rs(v, n);
    
    fin(v, n);
    
    auto ok = [&](ll sec){
        cnt = 0;
        
        f(n){
            // Each Maschines Products ! 
            cnt += (sec/v[i]);
            if(cnt >= k) return 1;
        }
        
        return 0;
    };
    
    // Binary Search on Answer ! 
    l = 1; // Best Case scenerio ! 
    r = 1e18; // Worst Case Scenerio ! 
    // l & r Represent the search Space! 
    
    wh(l <= r){
        mid = l + (r - l)/2;
        
        if(ok(mid) ){
            r = mid - 1;
            ans = mid;
        }     
        else l = mid + 1;
    }
    
    out(ans);
}

int main(){
    FastIO(); 
    
    T = 1;
    // in T;
    while(T--) solve();
}
