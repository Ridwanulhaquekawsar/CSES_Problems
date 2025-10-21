#include<bits/stdc++.h>
using namespace std;

int tickets,ticket_price,customers_pay,customer_willing_to_pay;
multiset<int>ml;

void solve(){
    cin>>tickets>>customers_pay;
    
    while(tickets--){
        cin>>ticket_price;
        ml.insert(ticket_price);
    }
    
    while(customers_pay--){
        cin>>customer_willing_to_pay;
        auto it=ml.upper_bound(customer_willing_to_pay);
        if(it==ml.begin()) cout<<"-1"<<'\n';
        else{
            cout<<*(--it)<<'\n';
            ml.erase(it);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
