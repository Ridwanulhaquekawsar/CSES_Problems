#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll n,x,sum,l,r; vector<pair<ll,ll>>a;

void solve(){
    cin>>n>>x;
    a.resize(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    
    
    l=0,r=n-1;
    while(l<r){
        sum=a[l].first+a[r].first;
        
        if(sum==x){
            cout<<a[r].second<<" "<<a[l].second;
            return;
        }
        else if(sum<x) l++;
        else r--;
    }
    
    cout<<"IMPOSSIBLE";
}

int main(){
    FastIO(); solve(); return 0;
}
