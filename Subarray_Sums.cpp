#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
#define ll long long int

ll n,x,ans,sum,l; vector<ll>a;

void solve(){
    cin>>n>>x;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    sum=0,ans=0,l=0;
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        // Here we are srinking the window size to equal to x ! 
        while(sum>x){
            sum-=a[l];
            l++;
        }
        
        if(sum==x) ans++;
    }
    
    
    cout<<ans;
}

int main(){
    FastIO(); solve(); return 0;
}
