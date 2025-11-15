#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll n,k,median,old_median,ans,mid;
vector<ll>a;
pbds<ll>pb;

void solve(){
    cin>>n>>k;
    a.resize(n);
    mid=(k+1)/2-1;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i<k) pb.insert(a[i]);
    }
    
    old_median=*pb.find_by_order(mid);
    for(int i=0; i<k; i++) ans+=llabs(old_median-a[i]);
    
    cout<<ans;
    
    for(int i=0; i<n-k; i++){
        pb.erase(pb.find_by_order(pb.order_of_key(a[i])));
        pb.insert(a[k+i]);
        
        median=*pb.find_by_order(mid);
        ans=ans-llabs(old_median-a[i])+llabs(median-a[k+i]);
        
        if(k%2==0) ans-=(median-old_median);
        old_median=median;
        
        cout<<" "<<ans;
    }
}

int main(){
    FastIO(); solve();
}

/*
#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
int main() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    indexed_set s;
    for (int i = 0; i < k; i++) s.insert(a[i]);
    ll old_m = *s.find_by_order((k + 1) / 2 - 1);
    ll d = 0;
    for (int i = 0; i < k; i++) d += abs(a[i] - old_m);
    cout << d;
    for (int i = 0; i < n - k; i++) {
        s.erase(s.find_by_order(s.order_of_key(a[i])));
        s.insert(a[i + k]);
        ll m = *s.find_by_order((k + 1)/ 2 - 1);
        d = d + abs(m - a[i + k]) - abs(old_m - a[i]);
        if (k % 2 == 0) d -= (m - old_m);
        old_m = m;
        cout << " " << d;
    }
    cout << endl;
}
*/


    
