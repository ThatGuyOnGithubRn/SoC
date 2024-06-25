#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main(){
    ll test;
    cin>> test;
    ll sum=0;
    ll mx=1e6;
    // max value of element is less than 10^6
    while(test--){
        ll n,count=0,fin=0;
        cin>>n;
        vector<int> a;
        a.reserve(n);
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        map<ll,ll> u1,u2,u3,u;
        for(ll i=0;i<n-2;++i)
        {
            u1[a[i]*mx+a[i+1]]++;
            u2[a[i]*mx+a[i+2]]++;
            u3[a[i+1]*mx+a[i+2]]++;
            u[a[i]*mx*mx+a[i+1]*mx+a[i+2]]++;}
        for (auto& pair : u1) {
            sum+= pair.second * (pair.second-1)/2;
        }
        for (auto& pair : u2) {
            sum+= pair.second * (pair.second-1)/2;
        }
        for (auto& pair : u3) {
            sum+= pair.second * (pair.second-1)/2;
        }
        for (auto& pair : u) {
            sum-= 3*pair.second * (pair.second-1)/2;
        }
        cout<<sum<<endl;
        sum=0;
    }

}