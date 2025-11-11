#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n;
deque<ll>dq;

void solve(){
    cin>>n;
    n++;
    
    while(n--) if(n!=0) dq.push_front(n);
    
    while(!dq.empty()){
        dq.push_back(dq.front());
        dq.pop_front();
        
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}

int main(){
    FastIO(); solve();
}
