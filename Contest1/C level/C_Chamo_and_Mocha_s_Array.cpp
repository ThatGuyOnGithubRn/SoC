#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll value(vector<ll> &acop,ll qwer){
    ll max=acop[acop.size()-qwer];
    for(int i=0;i<n;i++){
        if(a[i]==max){
            if(a[i+1]==acop[-qwer-1] || a[i-1]==acop[-qwer-1] || a[i-2]==acop[-qwer-1] || a[i+2]==acop[-qwer-1] ||){return acop[-qwer-1];}
            else{qwer++;value(vector<ll> &acop, ll qwer)}
        }
    }
}

int32_t main(){
    ll test;
    
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        bool no=true;
        ll j,n,max;
        cin>>n;
        ll qwer=1;
        vector<ll> a,acop;
        a.reserve(n);
        acop.reserve(n);
        for(int i=0;i<n;i++){
            cin>>j;
            a.push_back(j);
        }
        acop.resize(n);
        for(int i=0;i<n;i++){
            acop[i]=a[i];
        }
        sort(acop.begin(),acop.end());
        ll val = value(acop,qwer);
        cout<<val;
    }
}
