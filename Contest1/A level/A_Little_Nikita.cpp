#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,m;
        cin>>n>>m;
        if(n-m>=0 && (n-m)%2==0){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    
}