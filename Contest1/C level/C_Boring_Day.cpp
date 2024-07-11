#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    // max value of element is less than 10^6
    while(test--){
        ll n,l,r,j;
        cin>>n>>l>>r;
        vector<ll> v;
        v.reserve(n);
        ll out=0;
        for(ll i=0;i<n;i++){
            cin>>j;
            v.push_back(j);
        }
        j=0;
        ll c=0;
        for(ll i=0;i<n;i++){
            j+=v[i];ww
            if(v[i]<l){c++;}
            if(j>=l && j<=r){out++;j=0;}
            if(j>r){j-v[i-c+1];i--;}
            cout<<j<<" "<<out<< '.';
        }
        cout<<out<<endl;
    }
}